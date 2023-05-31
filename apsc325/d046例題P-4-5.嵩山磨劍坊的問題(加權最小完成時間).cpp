#include<bits/stdc++.h>
using namespace std;
const int maxN=100086;

typedef struct item{
    int t,w;

    bool operator < (item x){
        return this->t * x.w < x.t*this->w;
    }
}item;
item sword[maxN];

int main(){
    int n;  scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&sword[i].t);

    for(int i=0;i<n;i++)
        scanf("%d",&sword[i].w);
    sort(sword,sword+n);

    size_t waitingTime=0,ans=0;
    for(int i=0;i<n;i++){
        waitingTime += sword[i].t;
        ans += waitingTime*sword[i].w;
    }
    printf("%llu\n",ans);

}

/*
4
1 4 5 6
1 3 4 7
*/