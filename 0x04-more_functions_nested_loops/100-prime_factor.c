#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * prifac - prints fprime factor(largest)
 *
 * @num: number to be factorized
 */

void prifac(int num)
{
	int num2;

	for (num2 = 2; num > 1; num2++)
	{
		while (num % num2 == 0)
		{
			num = num / num2;
		}
		printf("%d", num2);
		putchar('\n');
	}
}

/**
 * main - main function
 *
 * Return: returns a value
 */

int main(void)
{
	prifac(24);
	return (0);
}
