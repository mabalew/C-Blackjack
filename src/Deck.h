#include<stdio.h>
#include<stdlib.h>

typedef struct Card {
    int rank;
    int suit;
} Card;

typedef struct Deck {
    Card cards[52];
    int current;
} Deck;

struct Deck newDeck();
void shuffle(Deck *deck);
void display(Deck deck);
