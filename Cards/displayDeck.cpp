#include "cards.h"
#include <iostream>

using namespace std;

void displayDeck(string deckI[])
{
	for(int c = 0; c < 52; c++)
	{
		cout<<deckI[c]<<", ";
	}
	cout<<endl;
}
