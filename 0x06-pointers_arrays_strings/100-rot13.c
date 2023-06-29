#include "main.h"
#include <stdio.h>
/**
  *rot13 - to encode rot13
  *@s:pointer to string parameter
  *Return: *s
  */
char *rot13(char *s)
{
	int y;
	int z;
	char mydata[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; z < 52; z++)
		{
			if (s[y] == mydata[z])
			{
				s[y] = datarot[z];
				break;
			}
		}
	}
	return (s);
}
