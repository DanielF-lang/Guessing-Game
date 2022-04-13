#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    srand(time(NULL));
    const unsigned int randomNumber = rand() % 10 + 1;
    unsigned int guessedNumber;
    unsigned int guessesLeft = 5;

    printf("Enter Guess: ");
    scanf("%d", &guessedNumber);
    --guessesLeft;

    while(guessedNumber != randomNumber && guessesLeft > 0) {
        printf("Incorrect!\r\nGuess Again: ");
        scanf("%d", &guessedNumber);
        --guessesLeft;
    }

    if(guessesLeft <= 0)
        printf("No More Guesses! Sucks to be You!\r\n");
    else
        printf("Correct! The Number was %d", randomNumber);

    return(0);
}