int len;
int len2;
unsigned int ui;
void *addr;
---------------------------------------------------------------------------------
len = _printf("Let's try to printf a simple sentence.\n");	// Let's try to printf a simple sentence.
len2 = printf("Let's try to printf a simple sentence.\n");  // Let's try to printf a simple sentence.

---------------------------------------------------------------------------------   
ui = (unsigned int)INT_MAX + 1024;

---------------------------------------------------------------------------------
addr = (void *)0x7ffe637541f0;
	
---------------------------------------------------------------------------------
_printf("Length:[%d, %i]\n", len, len);    // Length:[39, 39]
printf("Length:[%d, %i]\n", len2, len2);   // Length:[39, 39]
---------------------------------------------------------------------------------	
_printf("Negative:[%d]\n", -762534);    // Negative:[-762534]
printf("Negative:[%d]\n", -762534);		// Negative:[-762534]

---------------------------------------------------------------------------------	
_printf("Unsigned:[%u]\n", ui);    // Unsigned:[2147484671]
printf("Unsigned:[%u]\n", ui);    // Unsigned:[2147484671]

---------------------------------------------------------------------------------	
_printf("Unsigned octal:[%o]\n", ui);	// Unsigned octal:[20000001777]
printf("Unsigned octal:[%o]\n", ui);	// Unsigned octal:[20000001777]

---------------------------------------------------------------------------------	
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);	// Unsigned hexadecimal:[800003ff, 800003FF]
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);	// Unsigned hexadecimal:[800003ff, 800003FF]

---------------------------------------------------------------------------------	
_printf("Character:[%c]\n", 'H');	// Character:[H]
printf("Character:[%c]\n", 'H');	// Character:[H]

---------------------------------------------------------------------------------	
_printf("String:[%s]\n", "I am a string !");	// String:[I am a string !]
printf("String:[%s]\n", "I am a string !");		// String:[I am a string !]
    // String:[I am a string !]

---------------------------------------------------------------------------------	
_printf("Address:[%p]\n", addr);	// Address:[0x7ffe637541f0]
printf("Address:[%p]\n", addr);		// Address:[0x7ffe637541f0]

---------------------------------------------------------------------------------	
len = _printf("Percent:[%%]\n");	// Percent:[%]
len2 = printf("Percent:[%%]\n");    // Percent:[%]

---------------------------------------------------------------------------------	
_printf("Len:[%d]\n", len);	//Len:[12]
printf("Len:[%d]\n", len2); // Len:[12]

---------------------------------------------------------------------------------
_printf("Unknown:[%r]\n");	// Unknown:[%r]
printf("Unknown:[%r]\n");	// Unknown:[%r]

