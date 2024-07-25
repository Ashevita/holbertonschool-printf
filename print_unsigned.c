#include "main.h"
#include <stdio.h>

/**
 * print_unsigned - Prints an unsigned integer in decimal format.
 * @args: The variable argument list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_unsigned(va_list args)
{
    unsigned int n = va_arg(args, unsigned int); /* Retrieve the unsigned integer argument from the argument list */
    char buffer[50]; /* Buffer to store the formatted decimal string */
    int count = sprintf(buffer, "%u", n); /* Format the unsigned integer as a decimal string and store it in buffer */
    fputs(buffer, stdout); /* Print the formatted decimal string to standard output */
    return (count); /* Return the number of characters printed */
}
