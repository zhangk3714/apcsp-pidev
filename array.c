#include <stdio.h>

void arrayAdd(int arr[], int s, int n)
{
  int tp;
  for (int i = 0; i < s; i++)
  {
    tp = i + 1;
    arr[i] = arr[i] + n;
    printf("The %d number in the list is %d\n", tp, arr[i]);
  }
}


int main()
{
  // create an int array 5 long
  /*
   int arr[5];

  for (int i = 0; i < 5; i++)
  {
    arr[i] = i * i;
  }

  printf("1st and 3rd vals: %d, %d\n", arr[0], arr[2]);

  printf("Or %d, %d\n", *arr, *(arr+2));


  // create array to hold intialized values
  int arr2[] = { 1, 2, 3, 4 };
  for (int i = 0; i < 4; i++)
  {
    printf("%d, ", arr2[i]);
  }
  printf("\n");

  */

  // the actual thing
  int arr3[100];
  int tmp;

  for (int i = 0; i <= 99; i++)
  {
    tmp = i + 1;
    arr3[i] = tmp * tmp;
  }

  arrayAdd (arr3, 100, 69);
}

