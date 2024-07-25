#include "main.h"
#include <stdio.h>

int print_HEXA(va_list args)
{
    unsigned int n = va_arg(args, unsigned int);
    char buffer[50];
    int count = sprintf(buffer, "%X", n);
    fputs(buffer, stdout);
    return count;
}