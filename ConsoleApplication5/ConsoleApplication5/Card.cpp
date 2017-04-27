#include "Card.h"

#include <iostream>
using namespace std;

Card::Card() {}

Card::Card(int r, int s)
{
	rank = r;
	suit = s;
}

Card::Card(int r, int s, int v)
{
	rank = r;
	suit = s;
	value = v;
}

void Card::setRank(int r) 
{
	rank = r;
}

void Card::setValue(int v)
{
	value = v;
}

void Card::setSuit(int s)
{
	suit = s;
}

int Card::getRank() { return rank; }

int Card::getValue() { return value; }

int Card::getSuit() { return suit; }

bool Card::equal(const Card& otherCard) { return rank == otherCard.rank; }

int Card::compareRank(const Card& otherCard) {return rank - otherCard.rank; }

int Card::compareSuit(const Card& otherCard) {return suit - otherCard.suit; }

int Card::compareValue(const Card& otherCard) {return value - otherCard.value; }

int Card::compareTo(const Card& otherCard)
{
	if (rank == otherCard.rank)
		return suit - otherCard.suit;
	return rank - otherCard.rank;
}

string Card::showCard()
{
	string suits[] = { "Club", "Spade", "Heart", "Diamond" };
	string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
	return ranks[rank] + " of " + suits[suit];
}