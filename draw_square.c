#include "main.h"

/**
* draw_square - is a function that draws a square .
* @dimantion: is the width and height of square .
* @shape: is the shape used to draw square .
*
*/

void draw_square(int dimantion,char shape)
{
  int i, j;
  for (i = 0 ; i < dimantion ; i++)
    {
      for (j = 0 ; j < dimantion ; j++)
	{
	  printf("%c ",shape);
	}
      printf("\n");
    }
}
