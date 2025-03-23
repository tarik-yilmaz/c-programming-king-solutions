/*
 * Chapter 9, Project 8 – Craps Game Simulation
 * --------------------------------------------
 * This program simulates the game of Craps using three functions:
 *
 * 1. roll_dice() → returns the sum of two dice rolls
 * 2. play_game() → simulates one full game round using the rules of Craps
 * 3. main() → loops multiple games, tracks wins and losses, and asks the user to play again
 *
 * Rules:
 * ------
 * - First roll:
 *     - Win on 7 or 11
 *     - Lose on 2, 3, or 12
 *     - Otherwise, that value becomes the "point"
 * - Subsequent rolls:
 *     - Win by rolling the point again
 *     - Lose by rolling 7
 *     - Any other number → continue rolling
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

int roll_dice(void)
{
    int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int sum = dice1 + dice2;

    printf("You rolled: %d\n", sum);
    return sum;
}

bool play_game(void)
{
    int point;
    int sum = roll_dice();

    if (sum == 7 || sum == 11)
    {
        printf("You win!\n");
        return true;
    }
    else if (sum == 2 || sum == 3 || sum == 12)
    {
        printf("You lose!\n");
        return false;
    }

    point = sum;
    printf("Your point is %d\n", point);

    while (true)
    {
        sum = roll_dice();

        if (sum == point)
        {
            printf("You win!\n");
            return true;
        }
        else if (sum == 7)
        {
            printf("You lose!\n");
            return false;
        }
    }
}

int main(void)
{
    int wins = 0, losses = 0;
    char play_again;

    srand((unsigned)time(NULL));

    do
    {
        if (play_game())
        {
            wins++;
        }
        else
        {
            losses++;
        }

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play_again);

    } while (tolower(play_again) == 'y');

    printf("\nWins: %d  Losses: %d\n", wins, losses);

    return 0;
}
