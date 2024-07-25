#include "main.h"
#include <stdio.h>

int print_string(va_list args)
{
    const char *str = va_arg(args, const char *);
    int count = 0;
    while (*str)
    {
        putchar(*str++);
        count++;
    }
    return count;
}