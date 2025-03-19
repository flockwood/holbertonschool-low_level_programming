#include "variatic_function.h"
#include <stddef.h>

/** 
 * print_numbers - Prints numbers, followed by a new line
 * separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list ap;
	unsigned int i = 0;
	int total = 0;

	if (separator == NULL)
		return;

	va_start(ap);

	for (i = 0; i < n; i++)
	{
	  printf(%d, i);
  }

	va_end(ap);

	putchar('\n')
		return;

}

