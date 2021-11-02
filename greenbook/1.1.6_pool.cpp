#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);

using namespace std;


template <typename T>
struct Pool{
    vector<T*> buf;
    T* createNew(){
        buf.push_back(new T());
        return buf.back();
    }

    void dispose(){
        for(int i=0; i<buf.size();i++){
            delete buf[i];
        }
        buf.clear();
    }

};

int main(){
    IOS



}