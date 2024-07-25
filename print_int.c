#include "main.h"
#include <stdio.h>

/**
 * print_int - Prints an integer in decimal format.
 * @args: The variable argument list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list args)
{
    int n = va_arg(args, int); /* Retrieve the integer argument from the list */
    char buffer[50]; /* Buffer to hold the formatted integer string */
    int count = sprintf(buffer, "%d", n); /* Format the integer as a decimal string and store it in buffer */
    fputs(buffer, stdout); /* Print the formatted integer string to standard output */
    return count; /* Return the number of characters printed */
}
