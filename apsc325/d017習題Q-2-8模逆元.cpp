#include<bits/stdc++.h>
using namespace std;

size_t exp(int x,int y,int p){
    if(y<=0) return 1;
    if(y & 1)
        return (x*exp(x,y-1,p))%p;
    return (exp(x,y/2,p)*exp(x,y/2,p))%p;


}



int main(){
    int n,p,tmp;
    scanf("%d%d",&n,&p);

   for(int i=0;i<n-1;i++){
       scanf("%d",&tmp);
       printf("%llu ",exp(tmp,p-2,p));
   }
    scanf("%d",&tmp);
    printf("%llu",exp(tmp,p-2,p));
}