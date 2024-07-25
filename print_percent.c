#include "main.h"
#include <stdio.h>

/**
 * print_percent - Prints a percent sign.
 * @args: The variable argument list (unused in this function).
 *
 * Return: The number of characters printed.
 */
int print_percent(va_list args)
{
    (void)args; /* Ignore the unused parameter to avoid compiler warnings */
    _putchar('%'); /* Print the percent sign '%' */
    return (1); /* Return the number of characters printed (1 character) */
}
