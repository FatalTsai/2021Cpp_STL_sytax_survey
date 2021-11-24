#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL sa[1<<19],sb[1<<19];


int subset(int v[],int len,LL prod[],LL p){
    int k=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<k;j++){
            prod[k+j] = (v[i]*prod[j])%p;
        }
        prod[k+k] = v[i];
        k += k+1;
    }

    return k;
}

LL exp(LL x,LL y,LL p){
    if(y<=0) return 1;
    if(y & 1) return(x*exp(x,y-1,p))%p;
    return ( exp(x,y/2,p)*exp(x,y/2,p) )%p;
}


int main(){
    int n,a[30],b[30];
    LL p;
    scanf("%d%lld",&n,&p);
    int len_a = n/2,len_b = n-len_a;
    for(int i=0;i<len_a;i++) scanf("%d",&a[i]);
    for(int i=0;i<len_b;i++) scanf("%d",&b[i]);
#if 0
    printf("a[] = ");
    for(int i=0;i<len_a;i++){
        printf("%d ",a[i]);
    }

    printf("\nb[] = ");
    for(int i=0;i<len_b;i++){
        printf("%d ",b[i]);
    }

#endif

    int len_sa = subset(a,len_a,sa,p);
    int len_sb = subset(b,len_b,sb,p);

#if 0
    printf("\nsa[] = ");
    for(int i=0;i<len_sa;i++){
        printf("%lld ",sa[i]);
    }

    printf("\nsb[] = ");
    for(int i=0;i<len_sb;i++){
        printf("%lld ",sb[i]);
    }

#endif


    sort(sb,sb+len_sb);
    LL len_num=1;
    vector<LL>num(1<<19);
    num[0] = sb[0];

    for(int i=1;i<len_sb;i++){
        if(sb[i-1] != sb[i]){
            sb[len_num] = sb[i];
            num[len_num]=1;
            // printf("\nnum[%lld] = %lld",len_num,num[len_num]);
            len_num++;
        }
        else
            num[len_num-1]++;
            
    }

#if 0
   

    printf("\nsb[] = ");
    for(int i=0;i<len_num;i++){
        printf("%lld ",sb[i]);
    }
    printf("\nnum[] = ");
    for(int i=0;i<len_num;i++){
        printf("%lld ",num[i]);
    }


#endif


    LL ans = (sb[0] == 1)?num[0] : 0;

    for(int i=0;i<len_sa;i++){
        if(sa[i] == 1)  ans = (ans+1)%p;

        LL y = exp(sa[i],p-2,p);
        int it = lower_bound(sb,sb+len_num,y)- sb;

        // printf("num[%ld] = %lld\n",it,num[it]);

        if(it<len_num && sb[it] == y){
            ans= (ans+num[it])%p;
        }
    }

    // printf("ans = %d\n",ans);
    printf("%lld\n",ans);


}

/*
5 11
1 1 2 6 10
*/