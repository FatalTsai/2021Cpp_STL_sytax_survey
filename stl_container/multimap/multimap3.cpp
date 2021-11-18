// CPP Program to illustrate...
#include<iostream>
#include<map>
using namespace std;

int main()
{
	// initialize multimap
	multimap<char,int > m1;
	multimap<char,int> m2;
	
	// iterator for iterate all
	// element of multimap
	multimap<char,int >:: iterator iter;
	
	// multimap1 data
	m1.insert(make_pair('a',1));
	m1.insert(make_pair('b',2));
	m1.insert(make_pair('c',3));
	
	// multimap2 data
	m2.insert(make_pair('d',4));
	m2.insert(make_pair('e',5));
	
	// swap multimap1 data with
	// multimap2 data
	m1.swap(m2);
	
	
	// multimap1 data
	cout << "MultiMap 1 data" << "\n";
	for( iter = m1.begin() ;
		iter != m1.end() ; iter++)
	
	cout << (*iter).first << " "
		<< (*iter).second << "\n";
	
	
	// multimap2 data
	cout << "MultiMap 2 data" << "\n";
	for( iter = m2.begin() ;
		iter != m2.end() ; iter++ )
	
	cout << (*iter).first << " "
		<< (*iter).second << "\n";
}
