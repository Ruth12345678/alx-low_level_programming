#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
 * charneg - subtracts char values
 *
 * @sa: first string
 *
 * @sb: second string
 *
 * Return: returns a value
 */

int main()
{
	char sa[] = "Hello";
	char sb[] = "World!";
	int neg = sa - sb;

	printf("%d\n", neg);
	printf("%d\n", sa[0] - sb[0]);
	printf("%d\n", strcmp("Hello", "World"));
	return (neg);
}
