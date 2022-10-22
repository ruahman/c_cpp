#include<stdio.h>

void files_demo(){
  printf("***** files demo *****\n");
  /* FILE * fpointer = fopen("employees.txt", "w"); */
  FILE * fpointer = fopen("employees.txt", "a");

  fprintf(fpointer, "foobar\n");

  fclose(fpointer);

  fpointer = fopen("employees.txt", "r");
  char line[255];
  fgets(line, 255, fpointer);
  printf("%s\n", line);
  fclose(fpointer);
}

