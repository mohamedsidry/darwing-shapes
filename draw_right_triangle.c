#include "main.h"


/**
* draw_right_triangle - draws a triangle in the right side .
* @height: the height of the triangle .
* @shape: the shape used to create triangle .
*
*/


void draw_right_triangle(int height, char shape)
{
  int i, j, k;

  for (i = 1 ; i < height + 1 ; i++)
    {
      for (k = 1 ; k < 2 * i ; k++)
	{
	  printf(" ");
	}
      for (j = height + 1 ; j > i ; j--)
	{
	  printf("%c ", shape);
	}
      
      printf("\n");
    }
}
