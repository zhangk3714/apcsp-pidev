#include <stdio.h>

int main()
{
  int a = 0;
  int b = 1;
  printf("a is %d and b is %d\n", a, b);

  // if statement to test if a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  // if statement to test if a is equal to b
  if (a == b)
  {
    printf("a equals b\n");
  }
  else
  {
    printf("a does not equal b\n");
  }

  // if statement to test if a does not equal to b
  if (a != b)
  {
    printf("a does not equal to b\n");
  }
  else
  {
    printf("a does not not equal to b\n");
  }

  // if statement to test if a is greater than b
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  // if statement to test if a is greater than or equal to b
  if (a >= 0)
  {
    printf("a is greater than or equal to b\n");
  }
  else
  {
    printf("a is not greater than or equal to b\n");
  }

  // if statement to test if a & b is equal to 0
  if (a == 0 && b == 0)
  {
    printf("a and b both equal to 0\n");
  }
  else
  {
    printf("either a or b or both don't equal to 0\n");
  }

  // if statement to test if either a or b is equal to 0
  if (a == 0 || b == 0)
  {
    printf("either a or b or both don't equal to 0\n");
  }
  else
  {
    printf("niether a or b equal to 0\n");
  }

  // if statement to test if a is not equal to 0
  if (!a == 0)
  {
    printf("a does not equals to 0\n");
  }
  else
  {
    printf("a equals to 0\n");
  }

}
