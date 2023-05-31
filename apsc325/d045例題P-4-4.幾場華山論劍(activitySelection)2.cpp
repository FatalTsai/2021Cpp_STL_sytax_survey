#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;scanf("%d",&n);
    vector<pair<int,int>> events;

    for(int i=0;i<n;i++){
        int s,t;
        scanf("%d%d",&s,&t);
        events.push_back({t,s});
    }

    sort(begin(events),end(events) );

    int ans=0,lastT=-1;
    for(int i=0;i<n;i++){
        if(lastT < events[i].second){
            lastT = events[i].first;
            ans++;
        }

    }
    printf("%d\n",ans);

}