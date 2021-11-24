#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    int n,P;
    LL A[40];
    map<LL,LL> M1;
    scanf("%d%d",&n,&P);

    for(int i =0;i<n;i++)
        scanf("%lld",&A[i]);
    
    M1[A[0]] = 1;

    for(int i=1;i<n;i++){
        map<LL,LL> M2(M1);

        for (auto ele : M1){
            LL t = (ele.first*A[i] )%P;
            M2[t] = (M2[t]+ele.second);
        }
        M2[A[i]] = (M2[A[i]] +1);
        M1.swap(M2);
    }


    printf("%lld\n",M1[1]);

}
/*
5 11
1 1 2 6 10
*/