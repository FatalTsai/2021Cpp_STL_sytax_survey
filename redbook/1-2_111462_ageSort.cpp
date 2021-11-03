#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
using namespace std;
#define _for(i,a,b) for(int i = (a); i <(b); ++i)
const int MAXN = 100;

int main(){
    IOS

    int n,a,cnt[MAXN+8];
    while(scanf("%d",&n) == 1 && n){
        fill_n(cnt,MAXN+8,0);
        _for(i,0,n)scanf("%d",&a), ++cnt[a];
        
        _for(i,0,MAXN) _for(j,0,cnt[i])
            printf("%d%s",i,(i == MAXN-1 && j==cnt[i]-1) ? "" : " space");
        
        puts("\n");
        
    }


}