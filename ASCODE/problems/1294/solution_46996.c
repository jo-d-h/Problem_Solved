#include <stdio.h>
int main()
{
	int t; //테스트케이스(개수)
	int i; //횟수 집계
	int p; //각 케이스의 정수 개수만큼 반복
	int n = 0; //각 케이스의 정수 개수
	int nums = 0; //각 케이스의 정수 값들
	int rers[99][10] = {}; // 각 케이스의 나머지 개수
	int rtemp = 0; //각 정수별 나머지 저장(temp)

	scanf("%d", &t);

	for (i = 0; i < t; i++) //테스트 케이스만큼 반복
	{
		scanf("%d", &n); //각 케이스의 정수 개수 입력받기

		for (p = 0; p < n; p++) //각 케이스의 정수 값들 입력받기
		{
			scanf("%d", &nums);
			rtemp = nums % 10; // 나머지 계산

			if (rtemp == 0) //나머지가 0일때
				rers[i][0]++;

			if (rtemp == 1) //나머지가 1일때
				rers[i][1]++;

			if (rtemp == 2) //나머지가 2일때
				rers[i][2]++;

			if (rtemp == 3) //나머지가 3일때
				rers[i][3]++;

			if (rtemp == 4) //나머지가 4일때
				rers[i][4]++;

			if (rtemp == 5) //나머지가 5일때
				rers[i][5]++;

			if (rtemp == 6) //나머지가 6일때
				rers[i][6]++;

			if (rtemp == 7) //나머지가 7일때
				rers[i][7]++;

			if (rtemp == 8) //나머지가 8일때
				rers[i][8]++;

			if (rtemp == 9) //나머지가 9일때
				rers[i][9]++;
		}
	}


	for (i = 0; i < t; i++) //테스트 케이스만큼 반복
	{
		printf("0 : %d\n", rers[i][0]);
		printf("1 : %d\n", rers[i][1]);
		printf("2 : %d\n", rers[i][2]);
		printf("3 : %d\n", rers[i][3]);
		printf("4 : %d\n", rers[i][4]);
		printf("5 : %d\n", rers[i][5]);
		printf("6 : %d\n", rers[i][6]);
		printf("7 : %d\n", rers[i][7]);
		printf("8 : %d\n", rers[i][8]);
		printf("9 : %d\n\n", rers[i][9]);
	}

}
/**************************************************************
	Problem: 1294
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

