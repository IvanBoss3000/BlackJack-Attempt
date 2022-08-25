#include "common.h"

using namespace std;

//gcc command: clear;g++ main.cpp -lOle32 -lOleAut32 -luuid -o a.exe;./a.exe

int main() {
	srand(time(NULL));
	
	say("Welcome To Blackjack\nBegin? [y/n]: ");
	char response;

	cin >> response; 
	if (response == 'y') {
	} else { 
		say("Goodbye!");
		return 0;
	}

	// generate player and dealer
	player p1;
	player dealer;

	p1.chips = 100000;

	while (true) {
		
		//check if player has enough chips
		if(p1.chips <= 0) {goto noChip;}
		
		int bet = 0;

		say("place your bet: ");	//Place bet
		cin >> bet;

		p1.chips = p1.chips - bet;
		
									//deal cards
		p1.dealCards();
		dealer.dealCards();
		
		/*
		say("DEBUG+++++++++\n");
		p1.enumCards();
		say("\n");
		dealer.enumCards();
		say("DEBUG+++++++++\n");
        */


									//print dealers card and players cards
		say("dealers hand\n");			//dealer
		dealer.printCards(0);
		say("players hand\n");			//player
		p1.printCards(1);



									//check if player can split
		bool canSplit = false;
		if(p1.hand[0] == p1.hand[1]) { canSplit = true;}

		//LOOP
		//	ask player hit or stand, and if first play double down. (NOTE: player should be able to double down on first play of split, maybe dont update play counter...)
		
		int shownCards = 0;
		int playerFinal = 0;
		
		
		
	
		if(askRespond("Play Again? [y/n]: ") != 0) {goto end;}	
	}
noChip:;
       say("Sorry, not enough chips.\n");
end:;
	say("Thanks for playing!\n");

	return 0;

}
