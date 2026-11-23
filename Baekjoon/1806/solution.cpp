#include <iostream>
#include <algorithm> // sort, min 사용 가능
#include <climits>   // INT_MAX 사용

using namespace std;

int a[100000]; // 수열을 저장할 배열

int main() {
    int n, s;
    cin >> n >> s; // 수열의 크기와 목표 합 입력

    // 수열 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int start = 0, end = 0;
    int sum = 0;
    int minLen = INT_MAX; // 결과가 될 최소 길이

    // 슬라이딩 윈도우 알고리즘 시작
    while (true) {
        if (sum >= s) {
            // 합이 목표 이상이면 최소 길이 갱신 후 앞에서 빼기
            minLen = min(minLen, end - start);
            sum -= a[start];
            start++;
        } else if (end == n) {
            break; // 끝까지 갔으면 종료
        } else {
            // 아직 목표보다 작으면 뒤에 숫자 더하기
            sum += a[end];
            end++;
        }
    }

    // 출력: 찾은 최소 길이 또는 0
    if (minLen == INT_MAX) {
        cout << 0 << '\n';
    } else {
        cout << minLen << '\n';
    }

    return 0;
}