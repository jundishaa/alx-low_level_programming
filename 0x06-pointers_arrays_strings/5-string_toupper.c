#include "main.h"
/**
  *string_toupper - change lower case to uppercase
  *@n:pointer
  *Return: n
  */
char *string_toupper(char *n)
{
	int y;

	y = 0;
	while (n[y] != '\0')
	{
		if (n[y] >= 'a' && n[y] <= 'z')
			n[y] = n[y] - 32;
		y++;
	}
	return (n);
}
