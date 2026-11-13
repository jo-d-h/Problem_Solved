#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int tcase, price, tent, fivet, onet, fiveh, oneh;

	scanf("%d", &tcase);

	for (int i = 0; i < tcase; i++)
	{
		scanf("%d", &price);

		tent = price / 10000;
		fivet = (price % 10000) / 5000;

		if (fivet == 1)
			onet = ((price % 10000) - 5000) / 1000;
		else
			onet = (price % 10000) / 1000;

		fiveh = ((price % 10000) % 1000) / 500;
		oneh = (((price % 10000) % 1000) % 500) / 100;

		printf("%d %d %d %d %d\n", tent, fivet, onet, fiveh, oneh);
	}
}
/**************************************************************
	Problem: 1321
	Language: C
	Result: Accepted
	Time:3 ms
	Memory:1120 kb
****************************************************************/

