#include<bits/stdc++.h>
using namespace std;
const int maxN = 200086;


int main(){
    int n;  scanf("%d",&n);
    int data[maxN];
    for(int i=0;i<n;i++)  scanf("%d",&data[i]);

    sort(data,data+n);
    size_t waiting=0,ans=0;

    for(int i=0;i<n;i++){
        waiting+=data[i];
        ans+=waiting;
    }
    printf("%llu\n",ans);

}