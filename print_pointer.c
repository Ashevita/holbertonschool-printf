#include "main.h"
#include <stdio.h>

int print_pointer(va_list args)
{
    void *p = va_arg(args, void *);
    char buffer[50];
    int count = sprintf(buffer, "%p", p);
    fputs(buffer, stdout);
    return count;
}