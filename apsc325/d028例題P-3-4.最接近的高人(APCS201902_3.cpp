#include<bits/stdc++.h>
using namespace std;
const int INF = 99999999;
const int maxN = 200100;

int main(){
    int height[maxN];
    int n; scanf("%d",&n);
    height[0] = INF;

    for(int i=1;i<=n;i++)
        scanf("%d",&height[i]);

    multimap<int,int> M; //height,index
    size_t total=0;

    for(int i=n;i>=0;i--){
        auto it = M.begin();
        while(it != M.end() && it->first < height[i]){
            total +=  it->second -i;
            it = M.erase(it);
        }
        M.insert({height[i] , i });

    }

    printf("%llu\n",total);
}