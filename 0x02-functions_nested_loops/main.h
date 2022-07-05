#include<stdio.h>

int printa(void);
void print_alphabet(void);

int printa(void)
{
	char a[] = "_putchar";

	printf("%s\n", a);
	return (0);
}

void print_alphabet(void){
	char ab;

	for(ab = 'a'; ab <= 'z'; ab++)
	{
		putchar(ab);
	}
	putchar('\n');
}
