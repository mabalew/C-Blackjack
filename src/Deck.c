#include<stdio.h>
#include<stdlib.h>
#include"Deck.h"

struct Deck newDeck() {
    
    struct Deck deck ;
    
    int i = 0;                          // to iterate cards in deck
    for (int j = 0; j < 4; j++) {       // to iterate suit
        for (int k = 0; k < 13; k++) {  // to iterate rank
            Card card = {k,j};      
            i++;
        }
    }
    
    //shuffle(&deck);

    return deck;
}

void shuffle(Deck *deck) {

    for (int i = 0; i < 100; i++) {
        int x = rand() % 52;
        int y = rand() % 52;
        
        Card temp = deck->cards[i];

        /* figure out how to swap elements of array containing structs */
        
        printf("%d %d \n", x, y);
    }
}


void display(Deck deck) {
    for (int i = 0; i < 52; i++) {
        printf("Suit %d Rank %d \n", deck.cards[i].suit, deck.cards[i].rank);
    }
}

