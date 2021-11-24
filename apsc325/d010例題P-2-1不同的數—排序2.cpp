#include<bits/stdc++.h>
using namespace std;
set<int> s;



int main(){
    int n,tmp;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        s.insert(tmp);
    }

    // for(auto ele : s){
    //     printf("%d ",ele);
    // }

    printf("%lld\n",s.size());
    for (auto it=s.begin(); it!=prev(s.end(), 1); ++it)
        printf("%d ",*it);

    printf("%d", *prev(s.end(),1));
    
}

/*
7
0 3 9 3 3 -1 0
*/