#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
    IOS
    // c++11以上可以使用數組做初值化
    vector<int> vec{1,2,3,4,5,6,7,8};
    map<string,string> dict{{"ABC","123"} ,{"BCD","456"}};

    for(auto i :vec){
        cout<<i<<" ";
    }
    // printf("\n");
    cout<<"\n";

    for(auto i :dict){
        cout<<i.first<<" : "<<i.second<<endl;
    }


}