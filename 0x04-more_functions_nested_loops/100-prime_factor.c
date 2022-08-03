#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * prifac - prints fprime factor(largest)
 *
 * @num: number to be factorized. we used integer factorization
 * method/lcm to solve this
 */

void prifac(int num)
{
	int tst = 2, max;

	while (num != 0)
	{
		if (num % tst != 0)
		{
			tst  = tst + 1;
		}
		else
		{
			max = num;
			num = num / tst;
			if (num == 1)
			{
				printf("%d\n", max);
				break;
			}
		}
	}
}

/**
 * main - main function
 *
 * Return: returns a value
 */

int main(void)
{
	prifac(1231952);
	return (0);
}
