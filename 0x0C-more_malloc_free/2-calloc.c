#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * _calloc - allocates a memory for an array
 *
 * @nmemb: nymber if elements
 *
 * @size: in bytes
 *
 * Return: returns a value.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(nnemb * size);
	if (a == 0)
		return (NULL);
	memset(a,  0, nmemb * size);
	return (a);
}
