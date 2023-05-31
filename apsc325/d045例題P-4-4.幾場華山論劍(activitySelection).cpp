#include<bits/stdc++.h>
using namespace std;
const int maxN = 101386;
typedef struct event{
    int s,t; //start,termiate
    
    void print(){
        printf("(%d,%d) ",this->s,this->t);
    }
}event;


int main(){
    int n; scanf("%d",&n);
    event E[maxN];
    for(int i=0;i<n;i++)
        scanf("%d%d",&E[i].s,&E[i].t);

    sort(E,E+n,[](event x,event y){
        return x.t < y.t;
    });

    // printf("\n");
    // for(int i=0;i<n;i++)
    //     E[i].print();

    int ans=0,lastT=-1;
    for(int i=0;i<n;i++){
        if(lastT < E[i].s){
            lastT = E[i].t;
            ans++;
        }

    }
    printf("%d\n",ans);
    

}

/*
4
1 4
0 3
3 4
4 6
*/
