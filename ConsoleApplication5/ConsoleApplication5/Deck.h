#ifndef
#define Deck_H

#include "Deck.H"
#include <string>

Class Deck
{
private:
	Stack* deck;

public:
	Deck(); // initialize a new deck in order with all cards
	int getCapacity();
	int getSize();

	void shuffle(); //mix the cards and verify

	std::string display();
	friend std::ostream& operator<<(std::ostream&, Deck&);
}