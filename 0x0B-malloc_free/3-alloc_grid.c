#include "main.h"
#include <stdlib.h>
/**
  *alloc_grid - return pointer to 2 dimensional array
  *@width: widthinput
  *@height: height input
  *Return:pointer to 2 dim. array
  */
int **alloc_grid(int width, int height)
{
	int **yoo;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	yoo = malloc(sizeof(int *) * (height));

	if (yoo == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		yoo[x] = malloc(sizeof(int) * width);

		if (yoo[x] == NULL)
		{
			for (; x >= 0; x--)
				free(yoo[x]);

			free(yoo);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			yoo[x][y] = 0;
	}
	return (yoo);
}
