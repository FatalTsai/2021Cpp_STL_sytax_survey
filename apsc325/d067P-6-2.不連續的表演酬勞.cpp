#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int paid[n+1386];
    for(int i=0;i<n;i++){
        scanf("%d",&paid[i]);
    }
    int dp[n+1386];
    dp[0] = paid[0];

    for(int i=1;i<n;i++){
        dp[i] = max(dp[i-1],paid[i]+dp[i-2]);

    }
    printf("%d\n",dp[n-1]);

}