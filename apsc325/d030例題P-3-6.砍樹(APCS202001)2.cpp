#include<bits/stdc++.h>
using namespace std;
const int maxN =100000+86;
const int maxHeight = 1000000000+86;
const int INF = 2000000000;


int main(){
    int n,l;    scanf("%d%d",&n,&l);
    int pos[maxN],height[maxN];
    pos[0]=0;height[0] = INF;
    pos[n+1]=l;height[n+1] = INF;

    for(int i=1;i<=n;i++)   scanf("%d",&pos[i]);
    for(int i=1;i<=n;i++)   scanf("%d",&height[i]);


    stack<int> S;
    S.push(0);

    int total=0,highest=0;
    for(int i=1;i<=n;i++){
        if(pos[i]-height[i] >= pos[S.top()] || 
        pos[i]+height[i] <= pos[i+1]){
            total++;
            highest = max(highest, height[i]);

            while(pos[S.top()]+height[S.top()] <= pos[i+1]){                
                total++;
                highest = max(highest, height[S.top()]);
                S.pop();

            }
                
        }else{
            S.push(i);
        }


    }

    printf("%d\n%d\n",total,highest);

    

}

/*

6 140
10 30 50 70 100 125
30 15 55 10 55 25


*/