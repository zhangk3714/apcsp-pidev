#include <stdio.h>
#include <string.h>


int main()
{

  char alphabet1[] = "abcdefghijklmnopqrstuvwxyz";
  char alphabet2[27];

  for(int i = 0; i < 26; i++)
  {
    alphabet2[i] = 'a' + i;
  }

  alphabet2[26] = '\0';

  if (strcmp(alphabet1, alphabet2) == 0)
    printf("The two strings are the same\n");
  else
    printf("The two strings are not the same\n");

  for(int i = 0; i < 26; i++)
  {
  alphabet2[i] = 'A' + i;
  }

  if (strcmp(alphabet1, alphabet2) == 0)
    printf("The two new strings are the same\n");
  else
    printf("The two new strings are not the same\n");

  char alphabet3[100];

  strcpy(alphabet3, alphabet1);
  strcat(alphabet3, alphabet2);
  printf("String 1: %s\nString 2: %s\nString 3: %s\n", alphabet1, alphabet2, alphabet3);


  return 0;
}
