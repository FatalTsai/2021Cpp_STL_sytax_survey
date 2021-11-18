// C++ program to illustrate the
// multimap::key_comp() function

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Creating a multimap named m;
	multimap<char, int> m;

	multimap<char, int>::key_compare
		comp
		= m.key_comp();

	// Inserting elements into multimap
	m.insert(make_pair('a', 10));
	m.insert(make_pair('b', 20));
	m.insert(make_pair('c', 30));
	m.insert(make_pair('d', 40));

	cout << "Multimap has the elements\n";

	// Store key value of last element
	char l = m.rbegin()->first;

	// initializing the iterator
	map<char, int>::iterator it = m.begin();

	// printing elements of all multimap
	do {

		cout << it->first
			<< " => "
			<< it->second
			<< '\n';

	} while (comp((*it++).first, l));

	return 0;
}
