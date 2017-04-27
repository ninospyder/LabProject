#include "Card.h"
#include "Stack.h"

#include <iostream>

using namespace std;

Stack::Stack() 
{
	capacity = 100;
	size = 0;
	stack = new Card[capacity];
}

Stack::Stack(int cap)
{
	capacity = cap;
}

Stack::Stack(int c, int s)
{
	capacity = c;
	size = s;
}

bool Stack::isFull()
{
	if (size == 52) return true;
	else return false;
}

bool Stack::isEmpty()
{
	if (size == 0) return true;
	else return false;
}

int Stack::getCapacity()
{
	return capacity;
}

int Stack::getSize()
{
	return size;
}

const Card& Stack::pop()
{
	if (size == 0) cout << "Empty";
	else 
	{
		size--;
		return stack[size];
	}
}

void Stack::push(const Card& a)
{
	if (size == 52) cout << "Full";
	else
	{
		stack[size] = a;
		size++;
	}
}

const Card& Stack::peek()
{
	return stack[size-1];
}
	
std::string Stack::display()
{
	string thisStack;
	for (int i = 0; i < size; i++)
	{
		thisStack + stack[i].showCard() + " " = thisStack;
	}
	return thisStack;
}

std::ostream& operator << (std::ostream& out, Stack& s)
{
	string thisStack;
	Card c;
	for (int i = 0; i < s.getSize(); i++)
	{
		thisStack + c.showCard() + " " = thisStack;
	}
	out << thisStack << endl;
	return out;
}
