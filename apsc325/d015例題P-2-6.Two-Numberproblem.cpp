#include<bits/stdc++.h>
using namespace std;
const int maxN = 100000+86;

int main(){
    int m,n,K;
    int A[maxN],B[maxN];

    scanf("%d%d%d",&m,&n,&K);
    for(int i=0;i<m;i++) scanf("%d",&A[i]);
    for(int i=0;i<n;i++) scanf("%d",&B[i]);

    sort(A,A+m),sort(B,B+n);
    int j = n-1; // A[i]會越來越大 對上一個A[i]來說都太大的 肯定不用試了
    int ans=0;
    for(int i=0;i<m;i++){
     
        for (;j >=0 && B[j] > K-A[i];j--);
        
        if(A[i]+B[j] == K) ans++;
        
    }

    printf("%d",ans);
}

/*
3 4 2 
1 6 -3
5 1 -1 -3
*/