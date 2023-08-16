#include <stdio.h>
#include <stdlib.h>

int main()
{

  int age = 30;
  int * pAge = &age;
  double gpa = 3.4;
  double * pGpa = &gpa;

  printf("%d \n", *pAge);
  return 0;

}