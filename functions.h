#include "common.h"


//https://stackoverflow.com/questions/9040617/how-do-i-write-functions-that-accept-unlimited-arguments

int askRespond(string q) {
	std::cout<< q <<std::endl;

	char response;
	cin >> response;
	if (response == 'y') {return 0;} else {return 1;}


    return 1;
}

char convertCardNum(int cardNum) {
	
	char response;

	if(cardNum <= 9) {
		
		response = cardNum + 48;

	} else {
		switch(cardNum) {
			case 10:	// for 10 to not have to print 2 charaters imma just put 'T' for ten
				response = 'T';
				break;
			case 11:	//Jack
				response = 'J';
				break;
			case 12:	//Queen
				response = 'Q';
				break;
			case 13:	//King
				response = 'K';
				break;
			case 14:	//Ace
				response = 'A';
				break;
		}
	}

	return response;
				
}

void refreshScreen() {
	for(int i; i < 1024; i++) {
		printf("\b");
	}
}
