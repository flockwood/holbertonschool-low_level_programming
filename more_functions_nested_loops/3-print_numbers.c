#include "main.h"

/** 
 * print_numbers - prints the numbers from 0 to 9
 * @i: is a char from 0 to 9
 * Return: aleays 0
 */

void _putchar(char c) {
    putchar(c);
}

void print_numbers(void) {
    for (int i = 0; i <= 9; i++) {
        if (i <= 9) {
            _putchar(i + '0'); // Print numbers 0-9 without new line
        
            _putchar('\n'); // Print the newline
        }
    }

int main(void) {
    print_numbers();
    return 0;
}

