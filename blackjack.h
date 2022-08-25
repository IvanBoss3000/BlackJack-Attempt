#include "common.h"

void dealCard(player player) {
	srand(time(NULL));

	for(int i; i < 6; i++) {
		player.giveCard(rand() % 14 + 1, i - 1);
	}
}




