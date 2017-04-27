#include "Card.h"
#include "Stack.h"

#include <iostream>

using namespace std;

Stack::Stack() 
{
	capacity = 100;
	size = 0;
	stack = new Card*[100];
}

Stack::Stack(int cap)
{
	size = 0;
	stack = new Card*[cap];
	capacity = cap;
}

//Stack::Stack(int cap, int s)
//{
//	capacity = cap;
//	size = s;
//	stack = new Card[capacity];
//}

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

Card& Stack::pop()
{
	if (isEmpty() == true)
	{
		cout << "Empty";
		return **(stack + size);
	}
	else 
	{
		size--;
		return **(stack + size );
	}
}

void Stack::push(const Card& a)
{
	stack[size] = a;
	size++;
}

Card& Stack::peek()
{
	return *(stack+size-1);
}


std::string Stack::display()
{
	string s;
	for (int i = size - 1; i >= 0; i--)
	{
		s += stack[i].showCard() + " ";
	}
	return s;
}

/*
//returns the pointer for the array containing the cards... leaving room to only display some vs. all
std::string* Stack::display()
{
	string* thisStack = new string[size];
	Card card;
	for (int i = 0; i < size; i++)
	{
		card = *(stack + i);
		*(thisStack + i) = card.showCard();
	}
	return thisStack;
}
*/

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
