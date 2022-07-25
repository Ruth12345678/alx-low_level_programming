#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * fibu - fizz buzz function
 */

void fibu(void)
{
	int a;
	char f[5] = "Fizz";
	char b[5] = "Buzz";

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 != 0))
		{
			printf("%s ", f);
		}
		else if ((a % 5 == 0) && (a % 3 != 0))
		{
			printf("%s ", b);
		}
		else if ((a % 5 == 0) && (a % 3 == 0))
		{
			printf("%s%s ", f, b);
		}
		else
		{
			if (a != 100)
			{
				printf("%d ", a);
			}
			else
			{
				printf("%d", a);
			}
		}
	}
	putchar('\n');
}

/**
 * main - main function
 *
 * Return: returns a value
 */

int main(void)
{
	fibu();
	return (0);
}
