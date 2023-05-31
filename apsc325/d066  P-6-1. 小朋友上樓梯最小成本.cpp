#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int cost[n+1386];
    for(int i=0;i<n;i++){
        scanf("%d",&cost[i]);
    }    
    // for(int i=0;i<n;i++){
    //     printf("%d ",cost[i]);
    // }
    for(int i=2;i<n;i++)
        cost[i] += min(cost[i-1],cost[i-2]);
    printf("%d\n",cost[n-1]);


}