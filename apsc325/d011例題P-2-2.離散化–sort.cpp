#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    scanf("%d",&n);

    int orgiin[n+87];

    for(int i=0;i<n;i++) scanf("%d",&orgiin[i]);

    vector<int> vec(orgiin,orgiin+n);

    sort(vec.begin(),vec.end());
    auto last = unique(vec.begin(),vec.end());
    vec.erase(last,vec.end());

    for(int i=0;i<n-1;i++){
        printf("%lld ",distance(vec.begin() , lower_bound(vec.begin(),vec.end(),orgiin[i])) );
    }

    printf("%lld",distance( vec.begin(), lower_bound(vec.begin(),vec.end(),orgiin[n-1])) );
    

}