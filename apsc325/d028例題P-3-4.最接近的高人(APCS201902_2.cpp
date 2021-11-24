#include<bits/stdc++.h>
using namespace std;
const int INF = 99999999;
const int maxN = 200100;

int main(){
    int n; scanf("%d",&n);
    stack<pair<int,int> >S; //index,height
    S.push({0,INF});
    int tmp_height; size_t total=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&tmp_height);

        while(S.top().second <= tmp_height)
            S.pop();

        total +=  i - S.top().first ;

        S.push({i,tmp_height});
        
    }
    
    printf("%llu\n",total);

}