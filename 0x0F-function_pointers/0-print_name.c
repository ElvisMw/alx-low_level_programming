#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - To print name
 * @name: Person's name
 * @f: Points to printing format
 * Return: Null or nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
