#ifndef STACK_H
#define STACK_H

#include "Card.h"
#include <string>

class Stack
{
	
private:
	Card** stack;
	int capacity;
	int size;

	bool isFull();//to check if theres space in the stack to add
	bool isEmpty(); //to check if theres anything left to pop

public:
	Stack();
	Stack(int cap);
//	Stack(int c, int s);
	int getCapacity(); //what it can hold (52 cards)
	int getSize(); //whats actually in it

	Card& pop();
	void push(const Card&);
	Card& peek();

	std::string display();
	friend std::ostream& operator<< (std::ostream&, Stack&);
};

#endif
