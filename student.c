#include <stdio.h>
#include <string.h>
 
struct Student {
 char firstname[50];
 char lastname[50];
 int age;
 int id;
};
 
void printStudentByPtr(struct Student* student)
{
 printf("Student information: \n");
 printf("First name: %s\n", (*student).firstname);
 printf("Last name: %s\n", (*student).lastname);
 printf("Age: %d\n", (*student).age);
 printf("Id: %d\n", (*student).id);
}
 
struct Student enterStudent();
 
int main()
{
 char input[256];
 int size;
 printf("How many students?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &size);
 struct Student studs[size];
 for(int i = 0; i < size; i++)
 {
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
   sscanf(input, "%d", &studs[i].id);
 }
 printf("Printing all people\n");
 for(int i = 0; i < size; i++)
 {
   printStudentByPtr(&studs[i]);
 }
}