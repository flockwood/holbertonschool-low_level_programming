nclude <stdlib.h>
#include <string.h>

/**
 *  * string_nconcat - Concatenates two strings up to n bytes of s2.
 *   * @s1: The first string.
 *    * @s2: The second string.
 *     * @n: The number of bytes to concatenate from s2.
 *      *
 *       * Return: A pointer to the newly allocated concatenated string, or NULL if it fails.
 *        */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	    char *result;
		    unsigned int len1, len2, i, j;

			    // If s1 is NULL, treat it as an empty string
		  //     if (s1 == NULL)
	  //             s1 = "";
	//
  //                 // If s2 is NULL, treat it as an empty string
  //                     if (s2 == NULL)
  //                             s2 = "";
  //
  //                                 // Get the lengths of s1 and s2
  //                                     len1 = strlen(s1);
  //                                         len2 = strlen(s2);
  //
  //                                             // If n is greater than or equal to len2, use the entire string s2
  //                                                 if (n >= len2)
  //                                                         n = len2;
  //
  //                                                             // Allocate memory for the result string (len1 + n + 1 for null terminator)
  //                                                                 result = malloc(len1 + n + 1);
  //                                                                     if (result == NULL)
  //                                                                             return (NULL);
  //
  //                                                                                 // Copy s1 into result
  //                                                                                     for (i = 0; i < len1; i++)
  //                                                                                             result[i] = s1[i];
  //
  //                                                                                                 // Copy the first n bytes of s2 into result
  //                                                                                                     for (j = 0; j < n; j++)
  //                                                                                                             result[i + j] = s2[j];
  //
  //                                                                                                                 // Null-terminate the result
  //                                                                                                                     result[i + j] = '\0';
  //
  //                                                                                                                         return result;
  //                                                                                                                         }
  //
