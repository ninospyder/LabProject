#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a[] = "hello"; 
	strupr(a);
	cout << a << endl << strlen(a) << endl;
	return 0;
}