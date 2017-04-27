#include "Deck.H"
#include "Card.h"
#include "Stack.h"
#include <string>
#include <iostream>

using namespace std;

Deck::Deck()
{
	deck = new Stack(52);

	for (int s = 0; s < 4; s++)
	{
		for (int r = 0; r < 13; r++)
		{
			deck->push(Card(r, s));
		}
	}
}

int Deck::getCapacity()
{
	//return (*deck.)getCapacity();
	return deck->getCapacity();
}

int Deck::getSize()
{
	return deck->getSize();
}


void Deck::shuffle()//mix the cards and verify
{
	Card temp;
	for (int i = 0; i < capacity; i++)
	{
		temp = *(deck + i);
		s.rand() % 52;
	}
}

std::string Deck::display()
{
	return deck->display();
}
/*	
std::ostream& operator<<(std::ostream& out, Deck& d)
{
	string thisDeck;
	Card c;
	for (int i = 0; i < d.getSize(); i++)
	{
		Card c = *(d[i]);
		thisDeck + c.showCard() + " " = thisDeck;
	}
	out << thisDeck << endl;
	return out;
}
*/
