#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

string deck[52] = {"As", "2s", "3s", "4s", "5s", "6s", "7s", "8s", "9s", "Ts", "Js", "Qs", "Ks", 
"Ac", "2c", "3c", "4c", "5c", "6c", "7c", "8c", "9c", "Tc", "Jc", "Qc", "Kc", 
"Ah", "2h", "3h", "4h", "5h", "6h", "7h", "8h", "9h", "Th", "Jh", "Qh", "Kh", 
"Ad", "2d", "3d", "4d", "5d", "6d", "7d", "8d", "9d", "Td", "Jd", "Qd", "Kd"};

void displayDeck();
void shuffle();
void deal();
void showHand();
string hand[5];
void evaluate();

int main(int argc, char** argv) {
	displayDeck();
	shuffle();
	displayDeck();
	deal();
	showHand();
	evaluate();
	cin.get();
	return 0;
}

void displayDeck()
{
	for(int c = 0; c < 52; c++)
	{
		cout<<deck[c]<<", ";
	}
	cout<<endl;
}

void shuffle()
{
	int r;
	string hCard;
	
	srand(time(0));
	
	for(int i = 0; i < 52; i++)
	{
		hCard = deck[i];
		r = rand() % 52;
		deck[i] = deck[r];
		deck[r] = hCard;
	}
}

void deal()
{
	for(int a = 0; a < 5; a++)
	{
		hand[a] = deck[a];
	}
}


void showHand()
{
	cout << endl << "Hand: ";
	for(int c = 0; c < 5; c++)
	{
		cout<<hand[c]<<' ';
	}
}

void evaluate()
{
	string rank[5];
	string suit[5];
/*	size_t club = rank.find("c");
	size_t heart = rank.find("h");
	size_t diomand = rank.find("d");
	size_t spade = rank.find("s");*/
	
	for(int i = 0; i < 5; i++)
	{
		cout<<endl;
		rank[i].assign(hand[i],0,1);
		suit[i].assign(hand[i],1,1);
		cout<<"Rank: "<<rank[i]<<" : "<<"Suit: "<<suit[i];
		cout<<endl;
		/*
		if(club!=string::npos)
		{
			suit = "clubs";
		}
		else if(heart!=string::npos)
		{
			suit = "heart";
		}
		else if(diomand!=string::npos)
		{
			suit = "diomand";
		}
		else if(spade!=string::npos)
		{
			suit = "clubs";
		}*/
	}
	for(int x = 0; x < 5; x++)
	{
		for(int b = x+1; b < 5; b++)
		{
			if(rank[x] == rank[b])
			{
				cout<<"A pair exists!"<<endl<<rank[x]<<" & "<<rank[b]<<endl;
			}
		}
	}
}








