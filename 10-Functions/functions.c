#include <stdio.h>
#include <stdlib.h>

int main()
{

  char name[20];
  int age;

  printf("Hey, tell me your name: ");
  scanf("%s", name);
  printf("And, tell me your age: ");
  scanf("%d", &age);

  sayHi(name, age);

  return 0;

}

// For create a funcion you need to tell what this function will do (void is a funtion with no return value)

// We can use paramters in the function to comunicate the functions

void sayHi(char name[], int age)
{
  printf("Hello, user %s!, your age here: %dyo\n", name, age);
}