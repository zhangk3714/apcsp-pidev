#include <stdio.h>
#include "student.h"

int main()

{
 char input[256];
 int size;

 printf("How many students?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &size);

 struct Student studs[size];

 for(int i = 0; i < size; i++){
    printf("First Name:\n");

 fgets(input, 256, stdin);
 sscanf(input, "%s", &studs[i].firstname);

printf("Last Name:\n");
 fgets(input, 256, stdin);
 sscanf(input, "%s", &studs[i].lastname);

printf("Age:\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &studs[i].age);


printf("ID:\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &studs[i].studid);


 }
 printf("Printing all people\n");

 for(int i = 0; i < size; i++){
   printStudentByPtr(&studs[i]);
 }
}