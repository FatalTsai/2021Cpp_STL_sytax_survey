#include<bits/stdc++.h>
using namespace std;

int nq(int n){
    int p[14],total=0;
    for(int i=0;i<n;i++) p[i] = i;


    do{
        bool vaild = true;

        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                if(abs(p[i]-p[j]) == j-i){
                    vaild = false;
                    break;
                }

        }
        if(vaild) total++;

    }while (next_permutation(p,p+n));
  

  
    return total;

}



int main(){

    for(int i=1;i<15;i++)
        printf("%d ",nq(i));


}