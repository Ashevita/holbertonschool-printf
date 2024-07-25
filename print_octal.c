#include "main.h"
#include <stdio.h>

/**
 * print_octal - Prints an unsigned integer in octal format.
 * @args: The variable argument list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_octal(va_list args)
{
    unsigned int n = va_arg(args, unsigned int); /* Retrieve the unsigned integer argument from the argument list */
    char buffer[50]; /* Buffer to store the formatted octal string */
    int count = sprintf(buffer, "%o", n); /* Format the integer as an octal string and store it in buffer */
    fputs(buffer, stdout); /* Print the formatted octal string to standard output */
    return count; /* Return the number of characters printed */
}
