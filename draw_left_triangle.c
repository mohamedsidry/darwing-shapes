#include "main.h"


/**
*
*
*
*
*/

void draw_left_triangle(int width , char shape)
{
  int i, j;
  for (i = 1 ; i < width ; i++)
    {
      for (j = 0 ; j < i ; j++)
	{
	  printf(" %c", shape);
	}
      printf("\n");
    }
}
