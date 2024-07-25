#include "main.h"
#include <stdio.h>

int print_int(va_list args)
{
    int n = va_arg(args, int);
    char buffer[50];
    int count = sprintf(buffer, "%d", n);
    fputs(buffer, stdout);
    return count;
}