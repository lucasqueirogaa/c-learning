#include <stdio.h>
#include <stdlib.h>

int main()
{

  // FILE * fpointer = fopen("employees.txt", "w");
  FILE * fpointer = fopen("employees.txt", "a");

  // fprintf(fpointer, "Jim, Sales man\nPam, Receptionist\nOscar, Accounting");
  fprintf(fpointer, "\nKelly, Customer Service");

  fclose(fpointer);

  printf("Hello World!\n");
  return 0;

}