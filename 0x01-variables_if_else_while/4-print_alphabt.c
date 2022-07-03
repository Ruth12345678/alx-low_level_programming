#include<stdio.h>
#include<string.h>

/**
 * main - entry point
 *
 * Return: returns zero as a success value
 */

int main(void)
{
	char a;

	for(a = 'a'; a <= 'z'; a++)
	{
		if(a != 'q' && a != 'e')
		{
			putchar(a);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
