
#include <stdio.h>
#include <stdlib.h>

void helloworld()
{
  printf("Hello from C\n");
}

void sleep(unsigned int time)
{
  printf("times up!! %d", time);
}

int add(int x, int y)
{
  return x + y;
}

void sendMessage(const char *message)
{
  printf("message: %s\n", message);
}

int main() {}
