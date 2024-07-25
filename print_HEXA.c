#include "main.h"
#include <stdio.h>

/**
 * print_HEXA - Prints an unsigned integer in uppercase hexadecimal format.
 * @args: The variable argument list containing the unsigned integer to print.
 *
 * Return: The number of characters printed.
 */
int print_HEXA(va_list args)
{
    unsigned int n = va_arg(args, unsigned int); /* Retrieve the unsigned integer argument */
    char buffer[50]; /* Buffer to store the formatted hexadecimal string */
    int count = sprintf(buffer, "%X", n); /* Format the integer as an uppercase hexadecimal string and store in buffer */
    fputs(buffer, stdout); /* Print the formatted hexadecimal string to standard output */
    return (count); /* Return the number of characters printed */
}
