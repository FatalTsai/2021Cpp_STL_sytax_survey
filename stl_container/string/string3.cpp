#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;
 
int main()
{
    string s1;
    s1 = "hello";
    int n = s1.find('e');
    int m = s1.find('a');
	cout << n <<endl<< m <<endl;
    n = s1.find('h',2); //从第二元素开始找
    cout << n <<endl;
    return 0;
}