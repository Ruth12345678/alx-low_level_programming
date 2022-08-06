#include "main.h"
#include<string.h>
#include<limits.h>

/**
 * _atoi - convert a string to an integer
 *
 * @s: char type string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int a = 0, b = 0, sign = 1, c;

	if (*s == '\0')
	{
		return (0);
	}
	if (s[a] == '-')
	{
		sign = -1;
		a++;
	}
	for (a = a; s[a] != '\0'; ++a)
	{
		if (s[a] == '-')
		{
			sign = -1 * sign;
		}
		else if (s[a] >= '0' && s[a] <= '9')
		{
			b = b * 10 + s[a] - '0';
			c = 1;
		}
		else if (c == 1)
		{
			break;
		}
		else
		{
		}
	}
	b = b * sign;
	return (b);
}
