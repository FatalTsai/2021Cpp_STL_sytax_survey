#include<iostream>
#include<string>
#include<cstdio>
 
using namespace std;
 
int main()
{
    string s1,s2,s3;
    char sa[100],sb[100],sc[100];
    sscanf("abc 123 wcd","%s%s%s",sa,sb,sc);
    s1 = sa;
    s2 = sb;
    s3 = sc;
    cout << s1 << " " << s2 << " " << s3 << endl;
 
    //将字符串分离成数字，分隔符为',''$'
    int a,b,c;
    sscanf("4,5$6","%d,%d$%d",&a,&b,&c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}