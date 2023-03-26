#include "main.h"


/**
* draw_to_right_triangle - draws a triangle faceing the right side .
* @height: is the height of triangle .
* @shape: is the shape used to draw triangle .
*
*/


void draw_to_right_triangle(int height , char shape)
{
  int i, j;

  for (i = 1 ; i < (height + 1) / 2  ; i++)
    {
      for (j = 0 ; j < i ; j++)
	{
	  printf("%c", shape);
	}

      printf("\n");
      
    }
  for (i = (height + 1) / 2 ; i > 0 ; i--)
    {
      for (j = 0 ; j < i ; j++)
	{
	  printf("%c", shape);
	}
      printf("\n");
    }
  
}
