#include<bits/stdc++.h>
using namespace std;
const int INF = 2000000000;

int main(){
    int n,max_diff=0; scanf("%d",&n);
    int prefixMin = INF;

    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);

        prefixMin = min(tmp,prefixMin);
        max_diff = max(max_diff,tmp - prefixMin);
    }

    printf("%d\n",max_diff);

}