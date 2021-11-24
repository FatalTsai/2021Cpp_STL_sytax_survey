/*
5 10
5 -5 8 -3 4
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    LL n,k;
    scanf("%lld%lld",&n,&k);
    LL psum=0,best=0;
    set<LL> S({0});

    for(int i=0;i<n;i++){
        LL v;
        scanf("%lld",&v);

        psum+=v;
        auto it = S.lower_bound(psum-k);
        if(it != S.end()) best = max(best,psum-*it);
        
        S.insert(psum);
    }

    printf("%lld\n",best);


}
