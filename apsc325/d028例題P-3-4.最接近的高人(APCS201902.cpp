#include<bits/stdc++.h>
using namespace std;
const int INF = 99999999;

int main(){
    int n;  scanf("%d",&n);
    int height[200000+1386];
    height[0] = INF;
    stack<int> S;
    S.push(0);
    size_t total=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&height[i]);

        while(height[S.top()] <= height[i])
            S.pop();
        
        // printf("in %d last height main is %d\n",height[i],height[S.top()]);
        total += i - S.top();
        S.push(i);
    }
   
    printf("%llu\n",total);



}