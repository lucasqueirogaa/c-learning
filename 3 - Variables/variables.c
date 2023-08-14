#include <stdio.h>
#include <stdlib.h>

// When we want create a variable, we need to create the variable telling C wath type of data we will use. Like: Text, number, decimal, etc...

// After tell the variable type, we will name the variable

// To insert a variable inside a string, we can use the interpolation, to interpolation using a string, we can use "%s", "s" is because we are inserting a string, after, we insert literaly the string

// And for insert a number, we need use "%d" and after this we can use the variable

int main()
{
  char characterName[] = "Jhon";
  int characterAge = 75;

  printf("There once was a man named %s\n", characterName);
  printf("He was %d years old.\n", characterAge);
  printf("He really like the name %s\n", characterName);
  printf("The man like her name, but not like being %d.\n", characterAge);

  return 0;

}