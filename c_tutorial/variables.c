#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void variables_demo(){
  printf("***** variable demo *****\n");
  char characterName[] = "John";
  int characterAge = 35;
  double gpa = 3.6;
  char grade = 'A';
  printf("charcterName: %s\n", characterName);
  printf("characterAge: %d\n", characterAge);
  printf("gpa: %f\n", gpa);
  printf("grade: %c\n", grade);
  printf("\n%f\n",floor(3.2));
  /* printf("\n%f",sqrt(16)); */
  /* printf("\n%f",pow(2,4)); */
  /* double x = sqrt(36); */
  /* printf("%f",x); */
  const int num = 312;
  printf("%d\n",num);

  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("%d",age);
  char name[20];
  /* fgets(name); */
  /* printf("\nname: %s", name); */
}
