#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - the function that Prints strings, followed by a new line.
 * @separator:string to be printed between strings.
 * @n:number of strings passed to the function.
 * @...: variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 * If one of the strings is NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list mystrings;
	char *mystr;
	unsigned int myindex;

	va_start(mystrings, n);

	for (myindex = 0; myindex < n; myindex++)
	{
		mystr = va_arg(mystrings, char *);

		if (mystr == NULL)
			printf("(nil)");
		else
			printf("%s", mystr);

		if (myindex != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(mystrings);
}
