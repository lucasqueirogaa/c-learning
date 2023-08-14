#include <stdio.h>
#include <stdlib.h>

// For get user input, we use a prompt, and the prompt is the "scanf"

int main()
{

  /*
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("You are %d years old\n", age);
  */

  /*
  double floatNumber;
  printf("Enter your float Number: ");
  scanf("%lf", &floatNumber);
  printf("Your number %f\n", floatNumber);
  */ 

  char name[20];
  printf("Enter your name: ");
  fgets(name, 20, stdin);
  printf("Your name is: %s\n", name);

  return 0;

}