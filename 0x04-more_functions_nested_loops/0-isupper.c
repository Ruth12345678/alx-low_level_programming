#include "main.h"
#include<string.h>

/**
 * _isupper - checks for an uppercase character
 *
 * @c: input character
 *
 * Return: returns a value
 */

int _isupper(int c)
{
	char a;
	int b = 0;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == a)
		{
			b = 1;
			return (b);
		}
		else if (c != a && a == 'Z')
		{
			return (b);
		}
	}
	return (b);
}
