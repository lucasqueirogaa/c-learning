#include <stdio.h>
#include <stdlib.h>

int main()
{

  char grade = 'F';
  switch (grade)
  {
    case 'A':
      printf("Heeey, you're great!\n");
      break;
    case 'B':
      printf("You did alright!\n");
      break;
    case 'C':
      printf("You did poorly!\n");
      break;
    case 'D':
      printf("You did very bad!\n");
      break;
    case 'F':
      printf("You failed\n");
      break;
    default:
      printf("Invalid Grade!");
  }

  return 0;

}