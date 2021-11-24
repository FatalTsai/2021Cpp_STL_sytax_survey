#include<bits/stdc++.h>
using namespace std;
const int maxN=100000+1386;


int main(){
    int n; scanf("%d",&n);
    int deg[maxN],parent[maxN],height[maxN]={0};
    fill_n(parent,n,-1);
    queue<int> Q;

    for(int i=1;i<=n;i++){
        scanf("%d",&deg[i]);
        if(deg[i] == 0) 
            Q.push(i);

        else{
            for(int j=0;j<deg[i];j++){
                int tmp;    scanf("%d",&tmp);
                parent[tmp] = i;
            }
        }
#if 0
    
        for(int i=1;i<n;i++){
            printf("\nparent[%d] = %d\n",i,parent[i]);
        }

#endif


    }
    int total = 0;
    while(1){
        int v = Q.front();
        Q.pop();
        total += height[v];
        if(parent[v] == -1){//is root ,orphan..
            printf("%d\n",v);
            break;
        }

        height[parent[v]] = max(height[parent[v]] ,height[v]+1 );
        if(--deg[parent[v]] == 0) Q.push(parent[v]);

    }
    printf("%d\n",total);

}




/*

9
1 6
3 5 3 8
0
2 1 7
1 9
0
1 2
0
0

*/