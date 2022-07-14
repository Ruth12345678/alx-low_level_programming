#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 *  main - valid password generator
 *
 *  Return: returns a value
 */

int main(void)
{
	int a, b, c;
	int pass[100];

	b = 0;

	srand(time(NULL));

	for(a = 0; a < 100; a++)
	{
		pass[i] = rand() % 78;
		b += (pass[i] + '0');
		putchar(pass[i] + '0');
		if((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
