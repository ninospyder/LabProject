/*
#include "LinkedList.h"
#include "Card.h"
#include <iostream>

using namespace std;

class LinkedList
{
private:
	Node *head;
	Node *tail;
	int size;

	void insertAtHead(Card* data)
	{
		if (isEmpty())
		{
			head = new Node(data);
			tail = head;
		}
		else
		{
			head = new Node(data, head);

		}
		size++;
	}

	void insertAtTail(Card* data)
	{
		if (isEmpty())
		{
			insertAtHead(data);
		}
		else
		{
			tail->setNext(new Node(data));
			tail = tail->getNext();
			size++;
		}
	}

	Card* removeAtHead();
	Card* removeAtTail();

	bool isEmpty();

public:
	LinkedList();
	Card* getHead();
	Card* getTail();
	Card* getAtIndex(int);
	int getSize();
	bool insertAtIndex(Card* data, int index)
	{
		if (index < 0 || index > size)
		{
			cerr << "index " << index << " is out of bounds" << endl;
			return false;
		}
		if (index == 0)
			insertAtHead(data);
		else if (index == size)
			insertAtTail(data;
		esle
		{
			Node* trav = head;;
			for (int i = 0; i < index - 1; i++)
			{
				trav = trav->getNext();
			}

			trav->setNext(new Node(data, trav -> getNext()));
			size++;
		}

		return true;
	}

	};

	*/