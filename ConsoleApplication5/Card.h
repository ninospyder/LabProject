#ifndef CARD_H
#define CARD_H

#include <string>

class Card
{
	//single card class
private:
	int rank;
	int suit;
	int value;

public:
	Card ();
	Card(int r, int s);
	Card(int r, int s, int v);
	void setRank(int r);
	void setValue(int v);
	void setSuit(int s);
	int getRank();
	int getValue();
	int getSuit();
	std::string showCard();
	bool equal(const Card& otherCard);
	int compareRank(const Card& otherCard);
	int compareSuit(const Card& otherCard);
	int compareValue(const Card& otherCard);
	int compareTo(const Card& otherCard);
};

#endif