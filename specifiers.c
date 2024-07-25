#include "main.h"
#include <stddef.h>

/* Table of specifiers and their corresponding functions */
specifier_table specifiers[] = {
    {'c', print_char},  /* Handle 'c' specifier with print_char function */
    {'s', print_string}, /* Handle 's' specifier with print_string function */
    {'%', print_percent}, /* Handle '%' specifier with print_percent function */
    {'d', print_int},   /* Handle 'd' specifier with print_int function */
    {'i', print_int},   /* Handle 'i' specifier with print_int function */
    {'u', print_unsigned}, /* Handle 'u' specifier with print_unsigned function */
    {'o', print_octal}, /* Handle 'o' specifier with print_octal function */
    {'x', print_hex},   /* Handle 'x' specifier with print_hex function */
    {'X', print_HEXA},  /* Handle 'X' specifier with print_HEXA function */
    {'p', print_pointer}, /* Handle 'p' specifier with print_pointer function */
    {'\0', NULL} /* End of table indicator (null specifier) */
};

/**
 * get_function - Retrieves the function pointer for a given specifier.
 * @spec: The format specifier character (e.g., 'c', 's', 'd').
 *
 * Return: A function pointer corresponding to the specifier, or NULL if not found.
 */
func_t get_function(char spec)
{
    int i;
    
    /* Loop through the specifier table to find a match */
    for (i = 0; specifiers[i].specifier; i++)
    {
        if (specifiers[i].specifier == spec) /* Check if the current specifier matches */
        {
            return specifiers[i].function; /* Return the corresponding function pointer */
        }
    }
    
    return (NULL); /* Return NULL if no matching specifier was found */
}
