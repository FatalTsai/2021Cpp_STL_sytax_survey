// C++ program to illustrate the
// set::key_comp() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// creating a set named 'a'
	set<int> a;

	set<int>::key_compare comp = a.key_comp();

	// Inserting elements into set
	for (int i = 0; i <= 10; i++)
		a.insert(i);

	cout << "Set a has the numbers: ";

	// stores the last value of the set
	int l = *a.rbegin();

	// initialising the iterator
	set<int>::iterator it = a.begin();

	// printing elements of all set
	do {
		cout << *it << " ";
	} while (comp(*(++it), l));

	return 0;
}
