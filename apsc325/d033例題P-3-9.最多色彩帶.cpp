#include<bits/stdc++.h>
using namespace std;
const int maxN = 200086;
int colors[maxN]= {0};
int bucket[maxN]={0};


void printSeq(int left,int right){
    printf("\nseq : ");
    for(int i=left+1;i<=right;i++)
        printf("%d ",colors[i]);
}

int main(){
    int n,L; scanf("%d%d",&n,&L);
    for(int i=0;i<n;i++) scanf("%d",&colors[i]);

    int ans=0,sum=0;
    for(int i=0;i<L;i++){
        if(bucket[colors[i]] == 0)
            sum++;
        bucket[colors[i]]++;
    }

    for(int left=0,right=L;right<n;left++,right++){
        if(bucket[colors[left]] == 1)
            sum--;
        bucket[colors[left]]--;

        if(bucket[colors[right]] == 0)
            sum++;
        bucket[colors[right]]++;

        // printSeq(left,right);
        // printf("\nans=%d\n",ans);
        ans = max(ans,sum);

    }
    printf("%d\n",ans);

}

/*

10 5
4 6 1 4 0 6 8 0 5 6

*/