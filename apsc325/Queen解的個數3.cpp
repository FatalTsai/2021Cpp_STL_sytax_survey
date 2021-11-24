#include<bits/stdc++.h>
using namespace std;

int nqr(int n,int k,int p[]){
    if(k>=n) return 1;
    int total =0;
    bool vaild[n];
   fill_n(vaild,n,true);

    for(int j=0;j<k;j++){
        vaild[p[j]] = false;
        int attack = p[j] + (j-k);
        if(attack >= 0) vaild[attack] = false;
        attack = p[j] + (k-j);
        if(attack < n) vaild[attack] = false;
    }

    for(int i = 0;i<n;i++){
        if(vaild[i]){
            p[k] = i;
            total += nqr(n,k+1,p);
        }
    }
    
    return total;


}


int main(){

    int p[17];
    for(int i=1;i<15;i++){
        printf("%d",nqr(i,0,p));
        if(i <14) putchar(' ');
    }


}