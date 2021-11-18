// CHARACTER SET EXAMPLE
// CPP program to illustrate
// Implementation of erase() function
#include <iostream>
#include <set>

using namespace std;

int main()
{
	// set declaration
	set<char> myset{ 'A', 'C', 'E', 'G' };
	set<char>::iterator it1, it2;

	// defining it1 pointing to the first
	// element and it2 to the last element
	it1 = myset.begin();
	it2 = myset.end();

	// decrementing the it2 two times
	it2--;
	it2--;

	// erasing elements within the
	// range of it1 and it2
	myset.erase(it1, it2);

	// Printing the set
	for (auto it = myset.begin();
		it != myset.end(); ++it)
		cout << ' ' << *it;
	return 0;
}
