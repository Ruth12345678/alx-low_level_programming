#include "main.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * _realloc - reallocates a memory
 *
 * @ptr: pointer
 *
 * @old_size: old sizel
 *
 * @new_size: new size
 *
 * Return: returns a value
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void newp;
	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size < = old_size)
	{
		return (ptr);
	}
	else
	{
		newp = malloc(new_size);
		if (newp)
		{
			memcpy(newp, ptr, old_size);
			free(ptr);
		}
		return (newp);
	}
	return (0);
}
