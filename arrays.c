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

