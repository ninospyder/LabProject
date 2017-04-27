#include "Card.h"
#include "Stack.h"
#include "Deck.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	Deck mine;

	cout << mine.display() << endl;

	mine.showCard();

	cout << "hello world\n"; 

	cout << "Change" << endl;

	return 0;
}