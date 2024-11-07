#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Function that determines the outcome of a Rock, Paper, Scissors game
const char* determine_winner(const char* player1, const char* player2) {
    if (strcmp(player1, player2) == 0) return "Draw";

    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }
    else {
        return "Player2";
    }
}

// Function to validate the input
int is_valid_move(const char* move) {
    return (strcmp(move, "Rock") == 0 || strcmp(move, "Paper") == 0 || strcmp(move, "Scissors") == 0);
}

int main() {
    char player1[20];
    char player2[20];

    printf("Enter move for Player 1 (Rock, Paper, or Scissors): ");
    scanf("%19s", player1);  // Read up to 19 characters to avoid overflow

    printf("Enter move for Player 2 (Rock, Paper, or Scissors): ");
    scanf("%19s", player2);  // Read up to 19 characters to avoid overflow

    // Validate the inputs
    if (!is_valid_move(player1) || !is_valid_move(player2)) {
        printf("Invalid input. Please enter Rock, Paper, or Scissors.\n");
    }
    else {
        // Get the result from the function and print it
        const char* result = determine_winner(player1, player2);
        printf("Result: %s\n", result);
    }

    return 0;
}
