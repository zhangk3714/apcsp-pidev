#include <stdio.h>
#include <math.h>

float areaOfCircle(float r)
{
  return r * r * M_PI;
}

int main(int argc, char* argv[])
{

  int t = 0;

    if ( argc = 3 )
    {
      if ( argv[1] < argv[2] )
      {
	t = 1;
      }
    }

  float lowerLimit;
  char input1[256];
  float upperLimit;
  char input2[256];

  if ( t = 0 )
  {

  printf("Not a valid input\nLower limit: ");

  while (1)
  {
    fgets(input1, 256, stdin);
    if (sscanf(input1, "%f", &lowerLimit) == 1)
      {
        if ( lowerLimit > 0 )
	  {
	    break;
          }
      }
    printf("\nNot a valid number. Please enter a valid number:\n");
  }

  printf("Upper limit: ");

  while (1)
  {
    fgets(input2, 256, stdin);
    if (sscanf(input2, "%f", &upperLimit) == 1)
      {
        if ( upperLimit > lowerLimit )
          {
            break;
          }
      }
  printf("\nNot a valid number. Please enter a valid number:\n");
  }
  }
  else
  {
    sscanf(argv[1], "%f", &lowerLimit);
    sscanf(argv[2], "%f", &upperLimit);
  }

  for (float i = lowerLimit; i <= upperLimit; i++)
    {
      float a;
      a = areaOfCircle(i);
      printf("The area of the circle with radius %f is %f\n", i, a);
    }

}
