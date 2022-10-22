#include<stdio.h>
#include<string.h>

struct Student {
  char name[50];
  char major[50];
  int age;
  double gpa;
};

void struct_demo(){
  printf("\n***** struct demo ****\n");
  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.5;
  strcpy(student1.name, "Jim");
  strcpy(student1.major, "computer");

  printf("%s\n",student1.name);
  printf("%s\n",student1.major);
}
