/*
#ifndef NODE_H
#define NODE_H

#include "Card.h"
#include <string>

using namespace std;

class Node
{

private:
	Card* data;
	Node* next;

public:
	Node();
	Node(Card* d);
	Node(Card* d, Node* n);

	Card* getData();
	void setData(Card* c);
	Node* getNext();
	void setNext(Node* n);
	std:: string display();
};

#endif

