#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, k; // n = 승객 수, k = 창구 개수
	int p[100] = { }; //승객의 순서 배열
	int c[100] = {}; //각 창구별 가장 최근에 배정된 승객 번호

	scanf("%d %d", &n, &k); //승객 수, 창구 개수 입력받기

	for (int i = 0; i < n; i++) //승객의 순서 입력받기
	{
		scanf("%d", &p[i]);
	}

	for (int i = 0; i < k; i++) //창구에 배정된 승객번호 배열 초기화
	{
		c[i] = 0;	
	}

	for (int i = 0; i < n; i++) //승객 수만큼 반복
	{
		int now_p = p[i]; //현재 승객 지정

		int j;
		for (j = 0; j < k; j++) //창구 개수만큼 반복
		{
			if (c[j] < now_p) //현재 창구의 마지막 승객보다 작다면 승객 배정후 반복문 탈출
			{
				c[j] = now_p;
				break;
			}
		}

		if (j == k) //배정할 곳이 없다면 NO 출력 후 종료
		{
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n"); //모두 배정했다면 YES 출력 후 종료
	return 0;
}