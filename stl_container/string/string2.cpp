#include<iostream>
#include<string>
 
using namespace std;
 
int main()
{
    string s;
    s = "0123456789";
    cout << s << endl;
 
    string::iterator it = s.begin();
 
    //删除s[3]
    s.erase(it+3);
    cout << s << endl;
 
    //删除s[1]~s[3]
    s = "0123456789";
    s.erase(it + 1,it + 4);
    cout << s << endl;
 
    //全部删除
    s.clear();
    cout << "clear : " << s << endl;
 
    return 0;
}