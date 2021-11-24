#include<bits/stdc++.h>
using namespace std;
const size_t maxN = 1000000000;

int main(){
    size_t n,k; scanf("%llu%llu",&n,&k);
    size_t tmp; 
    vector<size_t> data;
    for(size_t i=0;i<n;i++){
        scanf("%llu",&tmp);
        data.push_back(tmp);
    }
        
    size_t right,left;
    size_t sum=0,num=1,ans=0;
    for(left=0,right=0;right<n;right++){
        sum += data[right];
        while(sum > k){
            sum-=data[left];
            left++;
        }


        if(sum == ans){
            num++;
        }

        if(sum > ans){
            ans = sum;
            num = 1;
        }


    }

    printf("%llu\n%llu\n",ans,num);

}