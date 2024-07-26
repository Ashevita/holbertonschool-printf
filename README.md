## _PRINTF

This document is a README.md documentation for the custom _printf.



- `%c` : Prints a single character.
- `%s` : Prints a string.
- `%%` : Prints a percent sign.
- `%i` : Prints an integer.
- `%d` : Prints a decimal integer.

## FLOWCHART

![Flowchart printf](https://github.com/Ashevita/holbertonschool-printf/blob/main/Flowchart%20Printf.jpeg)

## Usage

To use the custom `printf` function, include the header file and call the function with the appropriate format string and arguments.

### Example

```c
#include "main.h"

int main() {
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, world!");
    _printf("Percent sign: %%\n");
    _printf("Integer: %i\n", 42);
    _printf("Decimal: %d\n", 123);
    return 0;
}
