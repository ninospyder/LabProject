#include "Card.h"
#include "Stack.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
/*	Card c(0, 0);
	Card c2(1, 2);

	cout << c.showCard() << endl;
	cout << c2.showCard() << endl;

	cout << c2.compareRank(c) << endl;
*/

	Card c1 = Card(0, 0);
	Card c2 = Card(1, 2);
	
	Stack myHand;
	myHand.push(c1);
	cout << "stack size now : " << myHand.getSize() << endl;

	cout << myHand.display() << endl;
	
	cout << "hello world\n"; 

/*
	for (int i = 0; i < 52; i++)
	{
		stack1[i] = Card::Card((rand() % 13 + 1), (rand() % 5 + 1));
	}
	cout << stack1[2].showCard();
*/
	return 0;
}