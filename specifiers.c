#include "main.h"
#include <stddef.h>

/* Table of specifiers */
specifier_table specifiers[] = {
    {'c', print_char},
    {'s', print_string},
    {'%', print_percent},
    {'d', print_int},
    {'i', print_int},
    {'u', print_unsigned},
    {'o', print_octal},
    {'x', print_hex},
    {'X', print_HEXA},
    {'p', print_pointer},
    {'\0', NULL} /* End of table indicator */
};

func_t get_function(char spec)
{
    int i;
    for (i = 0; specifiers[i].specifier; i++)
    {
        if (specifiers[i].specifier == spec)
        {
            return specifiers[i].function;
        }
    }
    return NULL;
}