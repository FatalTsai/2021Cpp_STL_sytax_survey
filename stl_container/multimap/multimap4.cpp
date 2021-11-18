// C++ program to illustrate
// multimap::erase()
#include <bits/stdc++.h>
using namespace std;

int main()
{

	// initialize container
	multimap<int, int> mp;
	// insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 5, 50 });

	// prints the elements
	cout << "The multimap before using erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}

	// function to erase in a given range
	// find() returns the iterator reference to
	// the position where the element is
	auto it1 = mp.find(2);
	auto it2 = mp.find(5);
	mp.erase(it1, it2);

	// prints the elements
	cout << "\nThe multimap after applying erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}
