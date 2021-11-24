#include <bits/stdc++.h>
using namespace std;
vector<int> vec;


int main(){
    int n,tmp;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        vec.push_back(tmp);
    }

    sort(vec.begin(),vec.end());

    auto ans = unique(vec.begin(),vec.end());

    vec.erase(ans,vec.end());

    printf("%d\n",vec.size());
    for(auto it = vec.begin();it!= prev(vec.end(),1);it++){
        printf("%d ",*it);
    }
    printf("%d",*prev(vec.end(),1));

}
/*
7
0 3 9 3 3 -1 0
*/