#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
	int t; //테스트 케이스 개수
	float s1 = 0; //길이
	char s2[10]; //길이 단위 입력
	float len; //mm로 변환한 길이
	int result; //각 단위별 비교

	char l1[] = "mm";
	char l2[] = "cm";
	char l3[] = "m";
	//char l4[] = "km";

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%f %s", &s1, &s2);
		result = 0;

		result = strcmp(s2, l1);
		if (result == 0)
			len = s1;
		else
		{
			result = strcmp(s2, l2);
			if (result == 0)
				len = s1 * 10;
			else
			{
				result = strcmp(s2, l3);
				if (result == 0)
					len = s1 * 1000;
				else
				{
					len = s1 * 1000000;
				}
			}
		}

		printf("%d\n", (int)len);
	}
	return 0;
}

/**************************************************************
	Problem: 1129
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

