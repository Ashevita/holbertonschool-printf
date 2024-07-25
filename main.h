#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* Include for variable argument list handling */

/* Function pointer type for handlers */
typedef int (*func_t)(va_list args); /* Typedef for a function pointer that takes va_list and returns int */

/* Function to output a single character */
int _putchar(char c); 

/* Structure to associate format specifiers with corresponding handler functions */
typedef struct {
    char specifier; /* Format specifier character (e.g., 'c', 's', 'd') */
    func_t function; /* Pointer to the function that handles the specifier */
} specifier_table;

/* Prototypes for handler functions */
/* Functions that handle specific format specifiers */
int print_char(va_list args); /* Handles 'c' specifier for characters */
int print_string(va_list args); /* Handles 's' specifier for strings */
int print_percent(va_list args); /* Handles '%' specifier for percent sign */
int print_int(va_list args); /* Handles 'd' or 'i' specifier for integers */
int print_unsigned(va_list args); /* Handles 'u' specifier for unsigned integers */
int print_octal(va_list args); /* Handles 'o' specifier for octal numbers */
int print_hex(va_list args); /* Handles 'x' specifier for lowercase hexadecimal numbers */
int print_HEXA(va_list args); /* Handles 'X' specifier for uppercase hexadecimal numbers */
int print_pointer(va_list args); /* Handles 'p' specifier for pointers */

/* Function to get the corresponding function for a format specifier */
func_t get_function(char spec); /* Returns a function pointer based on the format specifier character */

/* Prototype for the custom printf function */
int _printf(const char *format, ...); /* Custom printf function that takes a format string and variable arguments */

#endif /* MAIN_H */
