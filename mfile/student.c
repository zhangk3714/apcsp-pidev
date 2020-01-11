#include <stdio.h>
#include "student.h"

void printStudentByPtr(struct Student* student)

{
 printf("Student information: \n");
 printf("First name: %s\n", (*student).firstname);
 printf("Last name: %s\n", (*student).lastname);
 printf("Age: %d\n", (*student).age);
 printf("Id: %d\n", (*student).studid);
}