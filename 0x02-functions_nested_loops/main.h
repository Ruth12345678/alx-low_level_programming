#include<stdio.h>

int printa(void)
{
	char a[] = "_putchar";

	printf("%s\n", a);
	return (0);
}

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
}
