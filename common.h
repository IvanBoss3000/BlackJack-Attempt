#pragma once

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <iostream>
using namespace std;

#include "functions.h"

#define SIZEOF(x)  (sizeof(x) / sizeof((x)[0]))
#define say(x) printf(x)

#define cls() std::cout << "\033[2J\033[1;1H";

const int clubs = 0;                          //suits
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;

const int jack = 11;                          //face cards
const int queen = 12;
const int king = 13;
const int ace = 14;

struct card
{
   int number;   //2 to 10, jack, queen, king, ace
   int suit;     //clubs, diamonds, hearts, spades
};

class player {
	public:
		int hand[6];
		int chips = 100000;
		int wins, loses;
		int plays = 0;

		void giveCard(int cardNum, int position) {
			if (cardNum > 14) {
				printf("warning: card given is over int 15\n");
			} else {
				hand[position] = cardNum;
				printf("%d\n", hand[position]);
			}
		}


		void dealCards() {
			//srand(time(NULL));

			for(int i = 0; i < 7; i++) {

				int cardNum = rand() % 14 + 1;

				if (cardNum > 14) {
					printf("warning: card given is over int 15\n");
				} else {
					hand[i] = cardNum;
					//printf("%d\n", hand[i]);
				}
			}
		}
		
		void enumCards() { // NOTE: having 2 for loops with same value and not resetting is bad
			for(int i = 0; i < 7; i++) {
				printf("%d\n", hand[i]);
			}
		}

		void printCards(int hands) {
			for (int i = 0; i <= hands; i++) {
				printf("%c ", convertCardNum(hand[i]));
			}
			printf("\n");
		}

		int cardTotal(int cards) {
			
			int total = 0;

			for (int i = 0; i <= cards; i++) {

				if(hand[i] > 10 & hand[i] < 14) {total += 10;
				} else {total += hand[i];
				}
			}
			
			return total;
		}
};







