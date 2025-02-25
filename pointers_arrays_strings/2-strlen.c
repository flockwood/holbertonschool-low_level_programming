#include "main.h"

/*
 * _strlen - calculates the length of a string
 * @str: pointer to the string
 *
 * return: length of the string
 */
int _strlen(char *str)
{
	int length = 0; /* tab indentation */

	while (*str != '\0') /*creates loop to reach null-terminator */
  {
	  length++; /* increment character length */
		str++; /* moves to next character */
  }
	return (length); /*correct format*/
}
