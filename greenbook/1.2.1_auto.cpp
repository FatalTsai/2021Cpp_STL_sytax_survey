#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0),cin.tie(0);
using namespace std;


int main(){
    IOS
    vector<int> vec={1,3,8,6};
    auto& it = vec[1];
    it += 3;
    //變成 {1,6,8,6}

    for(auto i : vec){
        cout << i <<endl;

    }
}