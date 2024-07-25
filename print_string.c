#include "main.h"
#include <stdio.h>

/**
 * print_string - Prints a string of characters.
 * @args: The variable argument list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
    const char *str = va_arg(args, const char *); /* Retrieve the string argument from the list */
    int count = 0; /* Initialize a counter for the number of characters printed */
    
    while (*str) /* Loop through each character in the string */
    {
        _putchar(*str++); /* Print the current character and move to the next one */
        count++; /* Increment the character count */
    }
    
    return (count); /* Return the total number of characters printed */
}
