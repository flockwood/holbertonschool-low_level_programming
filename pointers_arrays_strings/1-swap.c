#include "main.h"

/**
 * swap - swaps the value of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	int temp;/* holds a temporary value*/

	temp = *a; /* give temporary value the value of *a */
	*a = *b; /* Assign the value of *b to *a */
	*b = temp; /* Assign the temporary value to *b*/
}
