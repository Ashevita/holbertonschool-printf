#include "main.h"
#include <stdio.h>

int print_char(va_list args)
{
    putchar(va_arg(args, int));
    return 1;
}