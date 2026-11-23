# include <stdio.h>

int main() 
{
    int a, b = 0;
    scanf("%d %d", &a, &b);

    printf("%d\n", a * ((b % 100) % 10));
    printf("%d\n", a * ((b % 100) / 10));
    printf("%d\n", a * (b / 100));
    printf("%d\n", a * b);
}
