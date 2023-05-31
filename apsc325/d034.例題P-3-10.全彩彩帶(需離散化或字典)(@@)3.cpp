
// not AC, problem seen from reginColorType
#include<bits/stdc++.h>

using namespace std;
const int maxN = 200086;
int colors[maxN];
int uniq_color[maxN];

int reginColorType(int len,int n){
    int bucket[maxN] = {0};
    int ans =-1;
    int reiginType=0;
    for(int i=0;i<len;i++){
        if(bucket[colors[i]] == 0)
            reiginType++;
        bucket[colors[i]]++;

        ans = max(ans,reiginType);
    }

    for(int i=1;i+len<n;i++){
        if(bucket[colors[i-1]] == 1)
            reiginType--;
        bucket[colors[i-1]]--;

        if(bucket[colors[i+len-1]] == 0)
            reiginType++;
        bucket[colors[i+len-1]]++;
        ans = max(ans,reiginType);
    }
    return ans;  
}

int reginColorType2(int L,int n){
    // int n,L; scanf("%d%d",&n,&L);
    // for(int i=0;i<n;i++) scanf("%d",&colors[i]);
    int bucket[maxN] = {0};

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
    // printf("%d\n",ans);
    return ans;
}



int main(){

    int n;  scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&colors[i]);
    copy(colors,colors+n,uniq_color);
    sort(uniq_color,uniq_color+n);
    int colorType=1;
    for(int i=1;i<n;i++){
        if(uniq_color[i-1] != uniq_color[i])
            uniq_color[colorType++] = uniq_color[i];
    }

    // for(int i=0;i<colorType;i++)
    //     printf("%d ",uniq_color[i]);
    for(int i=0;i<n;i++)
        colors[i] = lower_bound(uniq_color,uniq_color+colorType,colors[i]) - uniq_color;

    int length=0;
    for(int jump = n>>1;jump>0;jump>>=1){
       while(reginColorType(length+jump,n) < colorType)
        length+=jump;
    }
    printf("%d\n",length+1);

}

/*
10
6 4 1 6 0 4 5 0 7 4
*/

