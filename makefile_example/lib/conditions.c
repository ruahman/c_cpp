#include<stdio.h>

void conditions_demo(){
  printf("***** conditions demo *****\n");

  int result = 3;
  if(result < 10) {
    printf("less than 10");
  }
  else {
    printf("greater than 10");
  }

  char grade = 'A';
  switch(grade){
    case 'A':
      printf("grade A");
    default:
      printf("default");
  }
}
