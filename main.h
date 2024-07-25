#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* Function pointer type for handlers */
typedef int (*func_t)(va_list args);
int _putchar(char c);
/* Structure to associate specifiers and functions */
typedef struct {
    char specifier;
    func_t function;
} specifier_table;

/* Prototypes for handler functions */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEXA(va_list args);
int print_pointer(va_list args);

/* Function to get the corresponding function for a specifier */
func_t get_function(char spec);

/* Prototype for _printf function */
int _printf(const char *format, ...);

#endif /* MAIN_H */
