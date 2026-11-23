#include<stdio.h>

int main()
{
	int king, queen, look, bishop, knite, pon;
	
	scanf("%d %d %d %d %d %d", &king, &queen, &look, &bishop, &knite, &pon);
	
	printf("%d %d %d %d %d %d", 1 - king , 1 - queen, 2 - look, 2 - bishop, 2 - knite, 8 - pon);

}