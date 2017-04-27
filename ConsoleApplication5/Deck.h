#ifndef Deck_H
#define Deck_H

#include "Deck.H"
#include "Stack.h"
#include <string>

class Deck
{

private:
	Stack* deck;
	int capacity;
	int size;

public:
	Deck(); // initialize a new deck in order with all cards
	int getCapacity();
	int getSize();
	void shuffle(); //mix the cards and verify
	std::string display();
	friend std::ostream& operator<<(std::ostream&, Deck&);
};
#endif
