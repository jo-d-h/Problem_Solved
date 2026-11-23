# include <stdio.h>

int main()
{
	int h, m, d = 0;

	scanf("%d %d", &h, &m);
	scanf("%d", &d);

	h += d / 60;
	m += d % 60;

	if (m >= 60)
	{
		h++;
		m %= 60;
	}
	
	if (h >= 24)
		h %= 24;
	
	printf("%d %d\n", h, m);
}
