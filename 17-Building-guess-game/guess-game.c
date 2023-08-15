#include <stdio.h>
#include <stdlib.h>

int main()
{

  int secretNumber = 5;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  int outOfGuesses = 0;

  while(outOfGuesses == 0 && guess != secretNumber){
    if(guessCount < guessLimit){
      printf("Enter a number: ");
      scanf("%d", &guess);

      guessCount++;
    } else {
      outOfGuesses = 1;
    }

    if(guess > secretNumber && guessCount <=2){
      printf("Hey, your guess is higher the number!\n");
    } else if (guess < secretNumber && guessCount <=2) {
      printf("Hey, your guess is lower the number!\n");
    }
  }

  if(outOfGuesses == 1){
    printf("Hey, you loss with %d guesses!\n", guessCount);
  } else {
    printf("Hey, you win with %d guesses!\n", guessCount);
  }

  return 0;

}