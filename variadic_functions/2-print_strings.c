#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints string followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Description: If a separator is NULL, don't print it
 * If one of the strings is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	if (separator != NULL && i < n - 1)
	printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
