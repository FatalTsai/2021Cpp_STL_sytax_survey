#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,total=0;  scanf("%d",&n);
    vector<pair<int,int>> V;
    for(int i=0;i<n;i++){
        int x;scanf("%d",&x);
        V.push_back({x,0});
    }
    for(int i=0;i<n;i++){
        int y;scanf("%d",&y);
        V[i].second = y;
    }

    sort(V.begin(),V.end(),[](const auto A,const auto B){
        return A.first > B.first;
    });
    int max_y=-1;
    for(auto ele : V){
        // printf("(%d,%d) ",ele.first,ele.second);
        int y = ele.second;
        if(y > max_y){
            total++;
            max_y = y;
        }
    }
    printf("%d\n",total);

}
/*

8
3 1 5 3 4 7 8 9
8 2 5 1 2 4 2 3

*/