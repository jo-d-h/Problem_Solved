#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int now_t, now_m;
	scanf("%d %d", &now_t, &now_m);

	int cooking;
	scanf("%d", &cooking);

	int minute = now_t * 60 + now_m + cooking;

	int remain = minute;

	int hour = (remain / 60) % 24;
	int min = remain % 60;

	if (hour < 12)
		printf("AM %d:%d\n", hour, min);
	else if (hour == 12)
		printf("PM 12:%d\n", min);
	else if (hour > 12 && hour < 24)
		printf("PM %d:%d\n", hour - 12, min);
	else if (hour == 0)
		printf("AM 0:%d\n", min);
	return 0;
}
/**************************************************************
	Problem: 1240
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

