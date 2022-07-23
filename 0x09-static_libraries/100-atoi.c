#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: char type string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int a;
	int b = 0;
	int c = -1;
	int brk = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		{
			c = c * -1;
		}
		else if (s[a] >= '0' && s[a] <= '9')
		{
			b = b * 10;
			b -= (s[a] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	b = c * b;
	return (res);
}
