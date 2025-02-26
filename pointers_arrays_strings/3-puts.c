#include "main.h"

/* 
 * _puts - prints a string, followed by a new line
 * @str: will print this  string
 *
 * Function will loop through each character inside str and will use _putchar to print until it reaches the null terminator. A new line will also be printed after the string
 *
 */

void _puts(char *str)
{
	while(*str)
  {
	  _putchar(*str); /*Calls the custom _putchar function*/
	  str++;
  }
	_putchar('\n');
}
