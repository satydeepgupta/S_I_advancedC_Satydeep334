#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *game_images[] = {
        "Rock\n",
        "Paper\n",
        "Scissors\n"
    };

    int user_choice, computer_choice;

    printf("What do you choose? Type 0 for Rock, 1 for Paper, or 2 for Scissors:\n");
    scanf("%d", &user_choice);

    if (user_choice >= 3 || user_choice < 0) {
        printf("You typed an invalid number. You lose!\n");
        return 0;
    }

    printf("You chose:\n%s\n", game_images[user_choice]);

    srand(time(NULL));
    computer_choice = rand() % 3;

    printf("Computer chose:\n%s\n", game_images[computer_choice]);

    if (user_choice == 0 && computer_choice == 2) {
        printf("You win!\n");
    } else if (computer_choice == 0 && user_choice == 2) {
        printf("You lose!\n");
    } else if (computer_choice > user_choice) {
        printf("You lose!\n");
    } else if (user_choice > computer_choice) {
        printf("You win!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
