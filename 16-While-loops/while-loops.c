#include <stdio.h>
#include <stdlib.h>

int main()
{

  int index = 1;
  int index2 = 6;

  while(index <= 5){
    printf("%d\n", index);
    index++;
  }

  do {
    printf("Do %d\n", index);
    index2++;
  }  while(index <= 5);

  return 0;

}
