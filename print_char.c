#include "main.h"
#include <stdio.h>

/**
 * print_char - Prints a single character.
 * @args: The variable argument list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
    _putchar(va_arg(args, int)); /* Retrieve the character argument from the list and print it */
    return (1); /* Return the number of characters printed (1 character) */
}
