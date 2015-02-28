#include "cards.h"
#include <iostream>

using namespace std;

void evaluate(string handI[])
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
		rank[i].assign(handI[i],0,1);
		suit[i].assign(handI[i],1,1);
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
