#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;
 
int main()
{
    string s1;
    s1 = "hello";
 
    string s2;
    char s[1024];
    //scanf 输入速度比cin快的多
    //scanf 是C函数，不可以输入string
    scanf("%s",s);
    s2 = s;
 
    cout << s1 << endl;
    cout << s2 << endl;
 
    return 0;
}