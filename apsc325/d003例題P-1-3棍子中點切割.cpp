#include<bits/stdc++.h>
using namespace std;
#define N 500010
typedef long long LL;
LL p[N];

LL cut0(int left , int right){
    if(right-left <=1) return 0;
    printf("left = %d , right = %d\n",left,right);

    LL len = p[right] - p[left], k = (p[right]+p[left]) /2;
    int m=left;
    while (p[m]<k)
    {
        m++;
    }
    
    if(p[m-1]-p[left] >= p[right]-p[m])
        m--;

    return len+cut0(left,m)+cut0(m,right);

}

LL cut1(int left,int right){
    if(right - left<=1) return 0;
    // printf("left = %d , right = %d\n",left,right);
    int m=left;
    LL len = p[right] - p[left], k = (p[right]+p[left]) /2;
    for(int jump = (right-left)/2;jump >0;jump>>=1){
        while(m+jump < right && p[m+jump]<k)
            m += jump;
    }
    if(p[m]-p[left] < p[right]-p[m+1])
        m++; 
    return len+cut1(left,m)+cut1(m,right);
}

LL cut(int left ,int right){
    if(right -left<=1)  return 0;
    
    LL len = p[right] - p[left], k = (p[right]+p[left]) /2;
    int m = lower_bound(p+left,p+right,k) - p;
    if(p[m-1] - p[left] >= p[right] - p[m])
        m--;

    return len+cut(left,m)+cut(m,right);

}



int main(){
    int i,n,l;
    scanf("%d%d",&n,&l);
    p[0]=0;p[n+1]=l;
    for(int i =1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    // for(auto ele :p){
    //     printf("%d ",ele);
    // }
    printf("%lld\n",cut(0,n+1) );
}