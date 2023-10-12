#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that Print numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n:number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list mynums;
	unsigned int index;

	va_start(mynums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(mynums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mynums);
}
