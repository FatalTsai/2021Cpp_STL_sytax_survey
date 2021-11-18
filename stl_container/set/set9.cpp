// CPP program to demonstrate the
// set::equal_range() function
#include <bits/stdc++.h>
using namespace std;
int main()
{

	set<int> s;

	s.insert(1);
	s.insert(4);
	s.insert(2);
	s.insert(5);
	s.insert(3);

	// prints the set elements
	cout << "The set elements are: ";
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";

	// Function returns lower bound and upper bound
	auto it = s.equal_range(2);
	cout << "\nThe lower bound of 2 is " << *it.first;
	cout << "\nThe upper bound of 2 is " << *it.second;

	// Function returns the last element
	it = s.equal_range(8);
	cout << "\nThe lower bound of 8 is " << *it.first;
	cout << "\nThe upper bound of 8 is " << *it.second;

	// Function returns the range where the
	// element greater than 0 lies
	it = s.equal_range(0);
	cout << "\nThe lower bound of 0 is " << *it.first;
	cout << "\nThe upper bound of 0 is " << *it.second;

	return 0;
}
