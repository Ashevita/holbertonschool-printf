#include "main.h"
#include <stdio.h>

int print_hex(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[50];
    int count = sprintf(buffer, "%x", n);
    fputs(buffer, stdout);
    return count;
}