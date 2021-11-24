#include<bits/stdc++.h>
using namespace std;

void rec(vector<size_t> v,int pos,size_t prod,map<size_t,size_t> &M,size_t p){
    if(pos >= v.size()){
        M[prod]+=1;
        return;
    }

    rec(v,pos+1,(prod*v[pos])%p,M,p);
    rec(v,pos+1,prod,M,p);
}

size_t exp(size_t x,size_t y,size_t p){
    if(y<=0) return 1;
    if(y & 1) return (exp(x,y-1,p)*x)%p;

    return (exp(x,y/2,p) * exp(x,y/2,p)) % p;
}

int main(){
    int n,i;
    size_t p,tmp;
    scanf("%d%llu",&n,&p);
    vector<size_t> a,b;

    for(i=0;i<n/2;i++){
        scanf("%llu",&tmp);
        a.push_back(tmp);
    }
    for(;i<n;i++){
        scanf("%llu",&tmp);
        b.push_back(tmp);
    }

    map<size_t,size_t> M1,M2;

    rec(a,0,1,M1,p);
    rec(b,0,1,M2,p);
    M1[1]--,M2[1]--;

    // for(auto ele : M2){
    //     printf("%llu : %llu\n",ele.first,ele.second);
    // }

    size_t ans = (M1[1]+M2[1])%p;
    // printf("\nans init = %llu",ans);
    for(auto ele : M1){
        auto y = exp(ele.first,p-2,p);
        // printf("\nele.first = %llu , y=%llu\n",ele.first,y);
        auto it = M2.find( y);
        if(it != M2.end()){
            // printf("\nfound other %llu",it->first);
            ans = (ans+ (ele.second*(it->second))%p)%p;
        }

    }
    // printf("\nans = %llu\n",ans);
    printf("%llu\n",ans);

}

/*
5 11
1 1 2 6 10
*/