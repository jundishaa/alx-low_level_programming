#include "main.h"
/**
  *leet - encode in to 1337
  *@n: input value
  *Return: n value
  */
char *leet(char *n)
{
	int y, z;
	char sl[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (y = 0; n[y] != '\0'; y++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[y] == sl[z])
			{
				n[y] = s2[z];
			}
		}
	}
	return (n);
}
