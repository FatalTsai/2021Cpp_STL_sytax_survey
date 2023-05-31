#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    int n;  scanf("%d",&n);

    priority_queue<LL> pq;
    for(int i=0;i<n;i++){
        LL tmp;
        scanf("%lld",&tmp);
        pq.push(-tmp);
    }

    LL totol_cost=0;
    while(pq.size()>1){
       LL cost = pq.top();pq.pop();
       cost+=pq.top();pq.pop();
       pq.push(cost);

       totol_cost+=cost;
    }

    printf("%lld\n%lld\n",-pq.top(),-totol_cost);


}
/*

3
3 5 1

*/