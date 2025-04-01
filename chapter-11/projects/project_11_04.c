/*
 * Chapter 11, Project 4 - Poker Hand Classifier (Modular Version)
 *
 * This program reads a five-card poker hand, analyzes it, and prints the result.
 * All external variables from the original implementation have been removed.
 * Data is passed explicitly between functions using parameters and pointers.
 *
 * Author: [Your Name]
 * Date: [YYYY-MM-DD]
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

/* Function prototypes */
void read_cards(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS]);
void analyze_hand(const int num_in_rank[NUM_RANKS], const int num_in_suit[NUM_SUITS],
                  bool *straight, bool *flush, bool *four, bool *three, int *pairs);
void print_result(bool straight, bool flush, bool four, bool three, int pairs);

/********************************************************************
 * main: Calls read_cards, analyze_hand, and print_result repeatedly *
 ********************************************************************/
int main(void)
{
    int num_in_rank[NUM_RANKS];
    int num_in_suit[NUM_SUITS];
    bool straight, flush, four, three;
    int pairs;

    for (;;)
    {
        read_cards(num_in_rank, num_in_suit);
        analyze_hand(num_in_rank, num_in_suit, &straight, &flush, &four, &three, &pairs);
        print_result(straight, flush, four, three, pairs);
    }

    return 0;
}

/********************************************************************
 * read_cards: Reads the cards into num_in_rank and num_in_suit     *
 *             arrays; checks for bad cards and duplicates.         *
 ********************************************************************/
void read_cards(int num_in_rank[NUM_RANKS], int num_in_suit[NUM_SUITS])
{
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    // Initialize arrays
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++)
            card_exists[rank][suit] = false;
    }
    for (suit = 0; suit < NUM_SUITS; suit++)
        num_in_suit[suit] = 0;

    // Read cards from user
    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();

        // Rank input
        switch (rank_ch)
        {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
            rank = 0;
            break;
        case '3':
            rank = 1;
            break;
        case '4':
            rank = 2;
            break;
        case '5':
            rank = 3;
            break;
        case '6':
            rank = 4;
            break;
        case '7':
            rank = 5;
            break;
        case '8':
            rank = 6;
            break;
        case '9':
            rank = 7;
            break;
        case 't':
        case 'T':
            rank = 8;
            break;
        case 'j':
        case 'J':
            rank = 9;
            break;
        case 'q':
        case 'Q':
            rank = 10;
            break;
        case 'k':
        case 'K':
            rank = 11;
            break;
        case 'a':
        case 'A':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        suit_ch = getchar();

        // Suit input
        switch (suit_ch)
        {
        case 'c':
        case 'C':
            suit = 0;
            break;
        case 'd':
        case 'D':
            suit = 1;
            break;
        case 'h':
        case 'H':
            suit = 2;
            break;
        case 's':
        case 'S':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card)
            printf("Bad card; ignored.\n");
        else if (card_exists[rank][suit])
            printf("Duplicate card; ignored.\n");
        else
        {
            num_in_rank[rank]++;
            num_in_suit[suit]++;
            card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

/********************************************************************
 * analyze_hand: Determines poker hand classification               *
 ********************************************************************/
void analyze_hand(const int num_in_rank[NUM_RANKS], const int num_in_suit[NUM_SUITS],
                  bool *straight, bool *flush, bool *four, bool *three, int *pairs)
{
    int num_consec = 0;
    int rank, suit;

    *straight = false;
    *flush = false;
    *four = false;
    *three = false;
    *pairs = 0;

    // Check for flush
    for (suit = 0; suit < NUM_SUITS; suit++)
    {
        if (num_in_suit[suit] == NUM_CARDS)
            *flush = true;
    }

    // Check for straight
    rank = 0;
    while (rank < NUM_RANKS && num_in_rank[rank] == 0)
        rank++;
    for (; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
        num_consec++;
    if (num_consec == NUM_CARDS)
    {
        *straight = true;
        return;
    }

    // Check for 4-of-a-kind, 3-of-a-kind, and pairs
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (num_in_rank[rank] == 4)
            *four = true;
        if (num_in_rank[rank] == 3)
            *three = true;
        if (num_in_rank[rank] == 2)
            (*pairs)++;
    }
}

/********************************************************************
 * print_result: Prints classification result                       *
 ********************************************************************/
void print_result(bool straight, bool flush, bool four, bool three, int pairs)
{
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}
