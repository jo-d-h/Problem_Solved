#include <vector>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                bool isPrime = true;

                // 소수 판별
                for (int a = 2; a * a <= sum; a++)
                {
                    if (sum % a == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }

                // 소수라면 정답 증가
                if (isPrime && sum >= 2)
                {
                    answer++;
                }
            }
        }
    }

    return answer;
}