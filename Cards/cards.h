#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

extern string deck[52];
extern string hand[5];

void displayDeck(string []);
void shuffle(string []);
void deal(string [], string []);
void showHand(string []);
void evaluate(string []);

