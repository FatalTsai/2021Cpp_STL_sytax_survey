#include<bits/stdc++.h>
using namespace std;

int nqr(int n,int k,int p[]){
    if(k>=n) return 1;

    int total=0;
    for(int i=0;i<n;i++){
        bool vaild = true;

        for(int j=0;j<k;j++){
            if(p[i] == i || abs(p[j] - i) == k -j){
                vaild = false;
                break;
            }
          
        }
        if(!vaild) continue;
        p[k] = i;
        total += nqr(n,k+1,p);


    }

    return total;
}




int main(){

    int p[15];
    for(int i=1;i<15;i++)
        printf("%d ",nqr(i,0,p));



}