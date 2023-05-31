#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL inv(int a[],int le,int ri){
    if(le+1>= ri)   return 0;
    int m = (le+ri)/2;
    LL w= inv(a,le,m) + inv(a,m,ri),cross = 0;

    int tmp[ri-le],j=m,k=0;
    for(int i=le;i<m;i++){
        while(j<ri && a[j]<a[i])
            tmp[k++] = a[j++];

        tmp[k++] = a[i];
        cross += j-m;
    }
    for(k=le;k<j;k++)
        a[k] = tmp[k-le];

    return w+cross;
}



int main(){
    int i,n,ar[100010];
    scanf("%d",&n);

    for(int i=0;i<n;i++)    scanf("%d",ar+i);
    printf("%lld\n",inv(ar,0,n));

}

/*

6
3 1 9 8 9 2


*/