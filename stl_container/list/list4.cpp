// CPP program to illustrate
// Application of remove_if() function
#include <iostream>
#include <list>
using namespace std;

// Predicate implemented as a function
bool prime(const int& value)
{
	int i;
	for (i = 2; i < value; i++) {
		if (value % i == 0) {
			return false;
			
		}
	}
	if (value == i) {
		return true;
	}
}

// Main function
int main()
{
	list<int> mylist{ 2, 4, 6, 7, 9, 11, 13 };
	mylist.remove_if(prime);
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout << ' ' << *it;
}
