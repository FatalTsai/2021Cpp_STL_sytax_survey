#include<bits/stdc++.h>
using namespace std;
const double INF = 10000.0;

int main(){
    int n;  scanf("%d",&n);
    vector<tuple<double,int,int> >swords;
    for(int i=0;i<n;i++){
        int t;  scanf("%d",&t);
        swords.push_back(make_tuple(0,t,0));
    }

    size_t total_w=0,ans=0;
    for(int i=0;i<n;i++){
        int w;  scanf("%d",&w);
        total_w += w;
        get<2> (swords[i]) = w;
        get<0> (swords[i]) = 
            static_cast<double> (w == 0) ? INF :get<1>(swords[i])/w;

    }
    sort(swords.begin(),swords.end());

    for(int i=0;i<n;i++){
        ans += total_w*get<1>(swords[i]);
        total_w -= get<2>(swords[i]);
    }
    printf("%llu\n",ans);


}


/*
4
1 4 5 6
1 3 4 7
*/