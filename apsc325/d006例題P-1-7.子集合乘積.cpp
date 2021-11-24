#include<bits/stdc++.h>
using namespace std;
#if 0
int main(){
    int n,ans=0;
    long long P=10009,A[26+2];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lld",&A[i]);

    for(int s=1;s < (1<<n);s++){
        long long prod=1;
        for(int j=0;j<n;j++){
            if(s & (1<<j)){
                prod= (A[j])%P;
            }
        }
        if(prod == 1) ans++;


    }


    printf("%d\n",ans);
}
#endif

long long  A[87];
int n,P=10009; //0<n<26
int ans = 0;

void rec(int i,int prod){
    if(i>=n){
        if(prod ==1) ans++;
        return;
    }

    rec(i+1,(prod*A[i])%P);
    rec(i+1,prod);


    return;
}


int main(){
    scanf("%d",&n);
    for(int i =0;i<n;i++) scanf("%d",&A[i]);

    rec(0,1);
    printf("%d\n",ans-1);
}