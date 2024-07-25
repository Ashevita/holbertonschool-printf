#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    const char *p;
    int count = 0;
    func_t func;

    va_start(args, format);

    for (p = format; *p; p++)
    {
        if (*p == '%' && *(p + 1))
        {
            p++;
            func = get_function(*p);
            if (func)
            {
                count += func(args);
            }
            else
            {
                _putchar('%');
                _putchar(*p);
                count += 2;
            }
        }
        else
        {
            _putchar(*p);
            count++;
        }
    }

    va_end(args);
    return count;
}
