#include <stdio.h>

float areaFunction (float r)
{
  return r*r*3.14159;
}

int main(int argc, char* argv[])
{
  int t = 0;
  float r, rmin, rmax;

  if ( argc == 3 )
    {
      sscanf(argv[1], "%f", &rmin);
      sscanf(argv[2], "%f", &rmax);
      if ( 0 < rmin )
      if ( rmin < rmax )
      {
	      t = 1;
      }
    }
  char input[256];
  
  

  if ( t == 0 )
  {
    if ( argc != 1 )
    {
      printf("Not a valid input\n");
    }

  printf("Smallest Radius: ");
  while (1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &rmin) == 1) 
    {
      if (rmin > 0)
      break;
    }
    printf(" Please input a valid number.\n");
  }
  
  printf("Largest Radius: ");
  while(1)
  {
    fgets(input, 256, stdin);
    if(sscanf(input, "%f", &rmax) == 1) 
    {
    if( rmax > rmin )
    {
      break;
    }
    }
    printf(" Please input a valid number.\n");
  }
  
  }
    for (r = rmin ; r <= rmax ; r ++)
    {
      printf("Radius: %f Area: %f\n", r, areaFunction(r));
    }
    return 0;
}
