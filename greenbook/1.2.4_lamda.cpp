#include<bits/stdc++.h>
// #include<ctime>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
#define _for(i,a,b) for(int i=(a);i<(b);++i) 
using namespace std;

struct TS{
    int a,b,c;
};
const int N = 10000000;
TS tss[N];


void genData(){
    _for(i,0,N){
        tss[i].a = rand();
        tss[i].b = rand();
        tss[i].c = rand();

    }
}


int main(){ 
    srand(time(NULL));
    genData();

    clock_t start = clock();
    sort(tss,tss+N, [](const TS& t1,const TS& t2){
        if(t1.a != t2.a) return t1.a < t2.a;
        if(t1.b != t2.b) return t1.b < t2.b;
        return t1.c <= t2.c;
        
    });

    printf("time : %ld",clock()-start);

    return 0;

}