// CPP program to demonstrate the
// set::value_comp()
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// initialising set a
	set<int> a;

	set<int>::value_compare comp = a.value_comp();

	// inserting elements to set a
	for (int i = 0; i <= 10; i++)
		a.insert(i);

	cout << "Set a has the numbers ";

	// start stores value of the last element of set a
	int start = *a.rbegin();

	// initialising iterator it
	set<int>::iterator it = a.begin();

	// Function that prints all the numbers in set
	do {
		std::cout << *it << " ";
	} while (comp(*(++it), start));

	std::cout << '\n';

	return 0;
}
