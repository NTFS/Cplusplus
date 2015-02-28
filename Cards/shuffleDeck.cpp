#include "cards.h"
#include <iostream>

using namespace std;

void shuffle(string deckI[])
{
	int r;
	string hCard;
	
	srand(time(0));
	
	for(int i = 0; i < 52; i++)
	{
		hCard = deckI[i];
		r = rand() % 52;
		deckI[i] = deckI[r];
		deckI[r] = hCard;
	}
}
