// #include<cstdio>
// #include <ostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;
template<typename T>
ostream& operator <<(ostream& os,const vector<T>& v){
    for(int i=0;i<v.size();i++) os << v[i];
    return os;
}




int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(3);
    a.push_back(8);
    a.push_back(6);

    cout<<a;

}