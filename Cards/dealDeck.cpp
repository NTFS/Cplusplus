#include "cards.h"
#include <iostream>

using namespace std;

void deal(string handI[], string deckI[])
{
	for(int a = 0; a < 5; a++)
	{
		handI[a] = deckI[a];
	}
}
