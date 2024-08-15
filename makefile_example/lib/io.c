#include<stdio.h>

void io_demo(){
  printf("***** io demo *****\n");

  char str[100];
  int i;

  printf("Enter a value:");
  /* scanf("%s %d", str, &i); */
  scanf("%s",str);

  printf("\nYou entered: %s\n", str);
}
