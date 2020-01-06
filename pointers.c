#include <stdio.h>

int main()
{

  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 21;
  float e = 420;
  float* ptrtod = &d;
  float* ptrtoe = &e;
  printf("The value of d is %f and the value of e is %f\n", d, e);

  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %f\n", &d);

  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e);

  *ptrtod = 420;
  *ptrtoe = 21;

  printf("The value of d is %f and the value of e is %f\n", d, e);

}
