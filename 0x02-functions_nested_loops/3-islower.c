#include "main.h"

/**
 *  _islower - checks if charcter is lowercase
 *
 *  @c - input character
 *
 *  Return: returns zero as success
 */

int _islower(int c)
{
	char f;
	int is_lower = 0;

	for (f = 'a'; f <= 'z'; f++)
		if (f == c)
			is_lower = 1;
	return (is_lower);
}
