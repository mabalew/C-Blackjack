#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct card {
	int id;
	char *symbol;
	int value;
} Card;

void init_card(Card *card, int id, char *symbol_prefix, char *symbol_suffix, int value);
void shuffle(int size, Card card[]);
void get_deck(int size, Card card[]);
void print_deck(int size, Card card[]);
void free_deck_mem(int size, Card card[]);
void free_card_mem(Card card);

//BLACK_SPADE = "\u2660";
//RED_SPADE = "\u2664";
//BLACK_HEART = "\u2665";
//RED_HEART = "\u2661";
//BLACK_DIAMOND = "\u2666";
//RED_DIAMOND = "\u2662";
//BLACK_CLUB = "\u2663";
//RED_CLUB = "\u2667";


char *black_spade = "\u2660";
char *black_heart = "\u2665";
char *black_club = "\u2663";
char *black_diamond = "\u2666";

Card *deck;

int main(void) {
  deck = malloc(sizeof(Card) * 52);
  get_deck(52, deck);
	print_deck(52,deck);
	shuffle(52, deck);
	puts("Potasowane");
	print_deck(52,deck);
	free_deck_mem(52, deck);
	return 0;
}

void free_deck_mem(int size, Card card[]) {
	int i = 0;
	for (i = 0; i < size; i++) {
		free_card_mem(card[i]);
	}
	free(card);
}

void free_card_mem(Card card) {
	free(card.symbol);
}

void get_deck(int size, Card card[]) {

//	init_card(black_spade_2, 0, "2" , black_spade, 2);
//	init_card(black_heart_2, 1, "2" , black_heart, 2);
//	init_card(black_club_2, 2, "2" , black_club, 2);
//	init_card(black_diamond_2, 3, "2" , black_diamond, 2);
	init_card(&card[0], 0, "2" , black_spade, 2);
	init_card(&card[1], 1, "2" , black_heart, 2);
	init_card(&card[2], 2, "2" , black_club, 2);
	init_card(&card[3], 3, "2" , black_diamond, 2);

//	init_card(black_spade_3, 4, "3" , black_spade, 3);
//	init_card(black_heart_3, 5, "3" , black_heart, 3);
//	init_card(black_club_3, 6, "3" , black_club, 3);
//	init_card(black_diamond_3, 7, "3" , black_diamond, 3);
	init_card(&card[4], 4, "3" , black_spade, 3);
	init_card(&card[5], 5, "3" , black_heart, 3);
	init_card(&card[6], 6, "3" , black_club, 3);
	init_card(&card[7], 7, "3" , black_diamond, 3);

//	init_card(black_spade_4, 8, "4" , black_spade, 4);
//	init_card(black_heart_4, 9, "4" , black_heart, 4);
//	init_card(black_club_4, 10, "4" , black_club, 4);
//	init_card(black_diamond_4, 11, "4" , black_diamond, 4);
	init_card(&card[8], 8, "4" , black_spade, 4);
	init_card(&card[9], 9, "4" , black_heart, 4);
	init_card(&card[10], 10, "4" , black_club, 4);
	init_card(&card[11], 11, "4" , black_diamond, 4);

//	init_card(black_spade_5, 15, "5" , black_spade, 5);
//	init_card(black_heart_5, 13, "5" , black_heart, 5);
//	init_card(black_club_5, 14, "5" , black_club, 5);
//	init_card(black_diamond_5, 15, "5" , black_diamond, 5);
	init_card(&card[12], 15, "5" , black_spade, 5);
	init_card(&card[13], 13, "5" , black_heart, 5);
	init_card(&card[14], 14, "5" , black_club, 5);
	init_card(&card[15], 15, "5" , black_diamond, 5);

//	init_card(black_spade_6, 16, "6" , black_spade, 6);
//	init_card(black_heart_6, 17, "6" , black_heart, 6);
//	init_card(black_club_6, 18, "6" , black_club, 6);
//	init_card(black_diamond_6, 19, "6" , black_diamond, 6);
	init_card(&card[16], 16, "6" , black_spade, 6);
	init_card(&card[17], 17, "6" , black_heart, 6);
	init_card(&card[18], 18, "6" , black_club, 6);
	init_card(&card[19], 19, "6" , black_diamond, 6);

//	init_card(black_spade_7, 20, "7" , black_spade, 7);
//	init_card(black_heart_7, 21, "7" , black_heart, 7);
//	init_card(black_club_7, 22, "7" , black_club, 7);
//	init_card(black_diamond_7, 23, "7" , black_diamond, 7);
	init_card(&card[20], 20, "7" , black_spade, 7);
	init_card(&card[21], 21, "7" , black_heart, 7);
	init_card(&card[22], 22, "7" , black_club, 7);
	init_card(&card[23], 23, "7" , black_diamond, 7);

//	init_card(black_spade_8, 24, "8" , black_spade, 8);
//	init_card(black_heart_8, 25, "8" , black_heart, 8);
//	init_card(black_club_8, 26, "8" , black_club, 8);
//	init_card(black_diamond_8, 27, "8" , black_diamond, 8);
	init_card(&card[24], 24, "8" , black_spade, 8);
	init_card(&card[25], 25, "8" , black_heart, 8);
	init_card(&card[26], 26, "8" , black_club, 8);
	init_card(&card[27], 27, "8" , black_diamond, 8);

//	init_card(black_spade_9, 28, "9" , black_spade, 9);
//	init_card(black_heart_9, 29, "9" , black_heart, 9);
//	init_card(black_club_9, 30, "9" , black_club, 9);
//	init_card(black_diamond_9, 31, "9" , black_diamond, 9);
	init_card(&card[28], 28, "9" , black_spade, 9);
	init_card(&card[29], 29, "9" , black_heart, 9);
	init_card(&card[30], 30, "9" , black_club, 9);
	init_card(&card[31], 31, "9" , black_diamond, 9);

//	init_card(black_spade_10, 32, "10" , black_spade, 10);
//	init_card(black_heart_10, 33, "10" , black_heart, 10);
//	init_card(black_club_10, 34, "10" , black_club, 10);
//	init_card(black_diamond_10, 35, "10" , black_diamond, 10);
	init_card(&card[32], 32, "10" , black_spade, 10);
	init_card(&card[33], 33, "10" , black_heart, 10);
	init_card(&card[34], 34, "10" , black_club, 10);
	init_card(&card[35], 35, "10" , black_diamond, 10);

//	init_card(black_spade_J, 36, "J" , black_spade, 10);
//	init_card(black_heart_J, 37, "J" , black_heart, 10);
//	init_card(black_club_J, 38, "J" , black_club, 10);
//	init_card(black_diamond_J, 39, "J" , black_diamond, 10);
	init_card(&card[36], 36, "J" , black_spade, 10);
	init_card(&card[37], 37, "J" , black_heart, 10);
	init_card(&card[38], 38, "J" , black_club, 10);
	init_card(&card[39], 39, "J" , black_diamond, 10);

//	init_card(black_spade_Q, 40, "Q" , black_spade, 10);
//	init_card(black_heart_Q, 41, "Q" , black_heart, 10);
//	init_card(black_club_Q, 42, "Q" , black_club, 10);
//	init_card(black_diamond_Q, 43, "Q" , black_diamond, 10);
	init_card(&card[40], 40, "Q" , black_spade, 10);
	init_card(&card[41], 41, "Q" , black_heart, 10);
	init_card(&card[42], 42, "Q" , black_club, 10);
	init_card(&card[43], 43, "Q" , black_diamond, 10);

//	init_card(black_spade_K, 44, "K" , black_spade, 10);
//	init_card(black_heart_K, 45, "K" , black_heart, 10);
//	init_card(black_club_K, 46, "K" , black_club, 10);
//	init_card(black_diamond_K, 47, "K" , black_diamond, 10);
	init_card(&card[44], 44, "K" , black_spade, 10);
	init_card(&card[45], 45, "K" , black_heart, 10);
	init_card(&card[46], 46, "K" , black_club, 10);
	init_card(&card[47], 47, "K" , black_diamond, 10);

//	init_card(black_spade_A, 48, "A" , black_spade, 10);
//	init_card(black_heart_A, 49, "A" , black_heart, 10);
//	init_card(black_club_A, 50, "A" , black_club, 10);
//	init_card(black_diamond_A, 51, "A" , black_diamond, 10);
	init_card(&card[48], 48, "A" , black_spade, 10);
	init_card(&card[49], 49, "A" , black_heart, 10);
	init_card(&card[50], 50, "A" , black_club, 10);
	init_card(&card[51], 51, "A" , black_diamond, 10);

	/*card[0] = *black_spade_2;
	card[1] = *black_heart_2;
	card[2] = *black_club_2;
	card[3] = *black_diamond_2;

	card[4] = *black_spade_3;
	card[5] = *black_heart_3;
	card[6] = *black_club_3;
	card[7] = *black_diamond_3;

	card[8] = *black_spade_4;
	card[9] = *black_heart_4;
	card[10] = *black_club_4;
	card[11] = *black_diamond_4;

	card[12] = *black_spade_5;
	card[13] = *black_heart_5;
	card[14] = *black_club_5;
	card[15] = *black_diamond_5;

	card[16] = *black_spade_6;
	card[17] = *black_heart_6;
	card[18] = *black_club_6;
	card[19] = *black_diamond_6;

	card[20] = *black_spade_7;
	card[21] = *black_heart_7;
	card[22] = *black_club_7;
	card[23] = *black_diamond_7;

	card[24] = *black_spade_8;
	card[25] = *black_heart_8;
	card[26] = *black_club_8;
	card[27] = *black_diamond_8;

	card[28] = *black_spade_9;
	card[29] = *black_heart_9;
	card[30] = *black_club_9;
	card[31] = *black_diamond_9;

	card[32] = *black_spade_10;
	card[33] = *black_heart_10;
	card[34] = *black_club_10;
	card[35] = *black_diamond_10;

	card[36] = *black_spade_J;
	card[37] = *black_heart_J;
	card[38] = *black_club_J;
	card[39] = *black_diamond_J;

	card[40] = *black_spade_Q;
	card[41] = *black_heart_Q;
	card[42] = *black_club_Q;
	card[43] = *black_diamond_Q;

	card[44] = *black_spade_K;
	card[45] = *black_heart_K;
	card[46] = *black_club_K;
	card[47] = *black_diamond_K;

	card[48] = *black_spade_A;
	card[49] = *black_heart_A;
	card[50] = *black_club_A;
	card[51] = *black_diamond_A;
*/
}

void shuffle(int size, Card card[]) {
	int i, n;
	Card tmp;

	srand(time(NULL));

	for (i = 0; i < size; ++i) {
		n = rand() % size;
		tmp = card[n];
		card[n] = card[i];
		card[i] = tmp;
	}
}

void init_card(Card *card, int id, char *symbol_prefix, char *symbol_suffix, int value) {
	card->symbol = malloc((strlen(symbol_prefix) + strlen(symbol_suffix) + 1) * sizeof(char));
	strcpy(card->symbol, symbol_prefix);
	strcat(card->symbol, symbol_suffix);
	card->id = id;
	//card->symbol = symbol;
	card->value = value;
}

void print_deck(int size, Card deck[]) {
	int count;
	for (count = 0; count < size; count++) {
		printf("----------------------\n");
		printf("id: %d\n", deck[count].id);
		printf("symbol: %s\n", deck[count].symbol);
		printf("value: %d\n", deck[count].value);
		printf("----------------------\n");
	}
}

void play() {
	shuffle(52, deck);
	//deal();

}
