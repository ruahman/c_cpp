#include<stdio.h>

void pointers_demo(){
  printf("***** pointers demo *****\n");
  int age = 30;
  int *pAge = &age;
  printf("%p\n", &age);
  printf("%p\n", pAge);
  printf("%d\n", *pAge);
  
}
