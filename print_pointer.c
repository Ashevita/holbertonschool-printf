#include "main.h"
#include <stdio.h>

/**
 * print_pointer - Prints a pointer address in hexadecimal format.
 * @args: The variable argument list containing the pointer to print.
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list args)
{
    void *p = va_arg(args, void *); /* Retrieve the pointer argument from the argument list */
    char buffer[50]; /* Buffer to store the formatted pointer address string */
    int count = sprintf(buffer, "%p", p); /* Format the pointer address as a hexadecimal string and store it in buffer */
    fputs(buffer, stdout); /* Print the formatted pointer address string to standard output */
    return (count); /* Return the number of characters printed */
}
