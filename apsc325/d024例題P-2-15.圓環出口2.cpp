#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    LL n,m,p[20000+1386];
    scanf("%lld%lld",&n,&m);
    for(LL i=0;i<n;i++)scanf("%lld",&p[i]);
    for(LL i=0;i<n;i++)p[n+i] = p[i];
    for(LL i=1;i<2*n;i++) p[i] += p[i-1];

    LL q,room=0;
    for(LL i=0;i<m;i++){
        scanf("%lld",&q);
        
        if(room != 0)
            q+=p[room-1];

        auto it = lower_bound(p,p+2*n,q)-p;
        room = (it+1)%n;

    }

    printf("%lld\n",room);

}


/*

7 3
2 1 5 4 3 5 3
8 9 12

*/