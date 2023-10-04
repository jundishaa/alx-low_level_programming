#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *_strdup - duplicate to new memory space
  *@str: char
  *Return: 0
  */
char *_strdup(char *str)
{
	char *jjj;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	jjj = malloc(sizeof(char) * (i + 1));

	if (jjj == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		jjj[b] = str[b];

	return (jjj);
}
