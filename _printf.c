#include "main.h"
#include <stdio.h>
#include <uintptr_t>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;
    const char *p = format;
    while (*p != '\0') 
    {
        if (*p == '%') 
        {
            p++;
            if (*p == 'c') 
            {
                char ch = (char) va_arg(args, int);
                putchar(ch);
                count++;
            } else if (*p == 's') 
            {
                char* str = va_arg(args, char*);
                while (*str != '\0') 
                {
                    putchar(*str);
                    str++;
                    count++;
                }
            }
        } 
        else 
        {
            putchar(*p);
            count++;
        }
        p++;
    }
    va_end(args);
    return count;
}