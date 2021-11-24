#include<bits/stdc++.h>
using namespace std;
set<int> S;

int main(){
    int m,n,K,tmp;
    scanf("%d%d%d",&m,&n,&K);
    for(int i=0;i<m;i++){
        scanf("%d",&tmp);
        S.insert(tmp);
    }
    int ans =0;

    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        if(S.find(K-tmp) != S.end())
            ans++;
    }

    printf("%d\n",ans);

}

/*
3 4 2 
1 6 -3
5 1 -1 -3
*/

