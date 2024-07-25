#include "main.h"
#include <stdio.h>

int print_percent(va_list args)
{
    (void)args; /* Avoid unused parameter warning */
    _putchar('%');
    return 1;
}
