#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0),cin.tie(0);
using namespace std;

int main(){

    IOS
    int arr[]={1,2,3,4,5,6,7};
    for(int& x : arr){ x+=2; }

    for(int i : arr){
        cout<<i<<endl;
    }

}