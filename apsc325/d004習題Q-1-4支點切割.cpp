#include<bits/stdc++.h>
using namespace std;
const int maxN = 50000+10;
typedef long long LL;
vector<LL> vec={2,4,1,3,7,6,9};


int cut(int left,int right,int k){
    vector<LL> multi;
    for(int i=left;i<right;i++){
        transform(vec.begin()+left,vec.begin()+right,multi,[](LL ele,i)-> LL{
            return ele*vec[i];
        });
    }
    
    for(auto ele : multi){
        printf("%lld ",ele);
    }

    return 0;
}



int main(){
    // int n,k;
    // LL tmp;
    // scanf("%d%d",&n,&k);

    // for(int i=0;i<n;i++){
    //     scanf("%lld",&tmp);
    //     vec.push_back(tmp);
    // }

    // for(auto ele : vec){
    //     printf("%lld ",ele);
    // }
    

    cut(0,6,0);
}