#include "function_pointers.h"
/**
 * print_name - function to print name
 * @name: character string
 * @f: function pointer that takes character string arg
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
