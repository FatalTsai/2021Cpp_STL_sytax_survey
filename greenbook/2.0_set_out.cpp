#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
#include <set>
using namespace std;


template <typename T>
ostream& operator <<(ostream& os, const set<T>& v){
    for(typename set<T>::iterator it=v.begin(); it!=v.end();it++){
        os<<*it<<" ";
    }
    return os;

}


int main(){

    set<string> b;
    b.insert("1");
    b.insert("3");
    b.insert("8");
    b.insert("6");

    cout << b;




}