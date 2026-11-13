//ascode 1297
#pragma warning(disable:4996)
#include<stdio.h>
#include <string.h>

int main()
{
	int t;
	int sum = 0;
	int age[16] = {};
	char name[16] = {};
	char posits[21] = {};
	int agemax = 0;
	int agemin = 100;
	char positsmax[21] = {};
	char positsmin[21] = {};
	char namemax[16] = {};
	char namemin[16] = {};

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s %d %s",&name, &age[i], &posits);
		sum += age[i];

		if (agemax < age[i])
		{
			agemax = age[i];
			strcpy(namemax, name);
			strcpy(positsmax, posits);
		}

		if (age[i] < agemin)
		{
			agemin = age[i];
			strcpy(namemin, name);
			strcpy(positsmin, posits);
		}
	}

	printf("average age : %d\n", sum / t);
	printf("the oldest : %s %s\n", namemax, positsmax);
	printf("the youngest : %s %s\n", namemin, positsmin);
}
/**************************************************************
	Problem: 1297
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

