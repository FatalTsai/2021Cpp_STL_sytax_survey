#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL exp2(int x,int y,int p){
    int total = 1;
    int xi = x;
    while (y >0){
        if(y & 1)
            total *= (xi%p);
        y>>=1;
        xi = xi*xi;
    }
    return total;
}

LL exp(int x,int y,int p){
    if(y<=0) return 1;

    else if(y & 1)
        return (x*exp(x,y-1,p) ) % p;

    return (exp(x,y/2,p) * exp(x,y/2,p) ) %p;
}

int main(){
    LL x,y,p;
    scanf("%lld%lld%lld",&x,&y,&p);

    printf("%lld\n",exp2(x,y,p));

}