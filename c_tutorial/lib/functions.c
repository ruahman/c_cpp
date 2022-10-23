#include <stdio.h>

void sayHi(){
  printf("sayHi.....\n");
}

// prototypeing
double cube(double num);

void functions_demo(){
  printf("***** functions demo *****\n");
  sayHi();
  printf("%f\n",cube(3));
}

double cube(double num) {
  return num * num * num;
}
