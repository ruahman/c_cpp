#include<stdio.h>

void loops_demo(){
  printf("***** loops demo *****\n");
  int index = 1;
  while(index < 10){
    printf("%d\n",index);
    index++;
  }
  for(int i = 0; i < 10; i++){
    printf("i: %d\n",i);
  }
}
