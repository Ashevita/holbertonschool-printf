#include <stdio.h>
#include <stdint.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	const char *p;
	int count;

	va_start(args, format);
	count = 0;
	p = format;

	while (*p != '\0')
	{
		if (*p == '%')
		{
			p++;
			if (*p == 'c')
			{
				char car = (char) va_arg(args, int);
				putchar(car);
				count++;
			}
			else if (*p == 's')
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
