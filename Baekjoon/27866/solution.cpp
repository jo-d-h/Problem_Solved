#include <stdio.h>

int main()
{
	char str[1001] = {};
	int i = 0;

	scanf("%s", &str);
	scanf("%d", &i);

	printf("%c", str[i - 1]);
}	