#include "cards.h"
#include <iostream>

using namespace std;

void showHand(string handI[])
{
	cout << endl << "Hand: ";
	for(int c = 0; c < 5; c++)
	{
		cout<<handI[c]<<' ';
	}
}
