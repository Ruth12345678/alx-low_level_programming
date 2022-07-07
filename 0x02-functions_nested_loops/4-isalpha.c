#include "main.h"

/**
 * _isalpha - checks if values is an uppercase letter
 *
 * @c: input character
 *
 * Return: exit point
 */

int _isalpha(int c)
{
	char g, h;
	int lcheck = 0;

	for (g = 'A'; g <= 'Z'; g++)
		for (h = 'a'; h <= 'z'; h++)
			if (c == g || c == h)
				lcheck = 1;
	return (lcheck);
}
