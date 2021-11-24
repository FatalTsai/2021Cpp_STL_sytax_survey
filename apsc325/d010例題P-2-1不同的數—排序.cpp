#include<bits/stdc++.h>
using namespace std;
const int maxN = 100000+20;

int distinct(int from[],int to[],int n){
    vector<int> vec(from,from+n);
    int k=1;
    sort(vec.begin(),vec.end());
    to[0] = vec[0];

    // for(auto ele :vec){
    //     printf("%d ",ele);
    // }

    for(int i =1;i<n;i++){
        if(vec[i-1] != vec[i]){

            // printf("%d ",vec[i]);
            to[k++] = vec[i];
        }
    }
    
    return k;
}


int main(){

    int n,from[maxN],to[maxN];
    scanf("%d",&n);
    if(n<1) return 0;



    for(int i =0;i<n;i++) scanf("%d",&from[i]);

    int k = distinct(from,to,n);

    printf("%d\n",k);
    for(int i=0;i<k-1;i++){
        printf("%d ",to[i]);
    }
    printf("%d",to[k-1]);


}