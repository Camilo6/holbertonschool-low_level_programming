#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints all arguments, seperated by char *separator
 * @format: list of all types of arguments
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *tm;
	char *s = "";

	va_start(args, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", s, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", s, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", s, va_arg(args, double));
			break;
		case 's':
			tm = va_arg(args, char*);
			if (tm == NULL)
			{
				tm = "(nil)";
			}
			printf("%s%s", s, tm);
			break;
		default:
			i++;
			continue;
		}
		tm = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
