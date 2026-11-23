#include <stdio.h>
#include <string.h>

int main()
{
	int t, sum = 0;
	char c[100] = "";
	scanf("%d", &t);
	scanf("%s", &c);
	for (int i = 0; i < t; i++)
	{
		sum += c[i] - '0';
	}

	printf("%d", sum);
}	