int main()
{
	int x;
	char grade[3] = {};

	scanf("%d", &x); //점수 입력

	if (x == 100)
		printf("A++");
	else if (x >= 97 && x <= 99)
		printf("A+");
	else if (x >= 93 && x <= 96)
		printf("A");
	else if (x >= 90 && x <= 92)
		printf("A-");
	else if (x >= 87 && x <= 89)
		printf("B+");
	else if (x >= 83 && x <= 86)
		printf("B");
	else if (x >= 80 && x <= 82)
		printf("B-");
	else if (x >= 77 && x <= 79)
		printf("C+");
	else if (x >= 73 && x <= 76)
		printf("C");
	else if (x >= 70 && x <= 72)
		printf("C-");
	else if (x >= 67 && x <= 69)
		printf("D+");
	else if (x >= 63 && x <= 66)
		printf("D");
	else if (x >= 60 && x <= 62)
		printf("D-");
	else
		printf("F");


	return 0;
}
	
/**************************************************************
	Problem: 1226
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1120 kb
****************************************************************/

