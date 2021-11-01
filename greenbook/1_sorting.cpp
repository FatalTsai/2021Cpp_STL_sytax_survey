using namespace std;
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cstdio>
#include <vector>
#define _for(i,a,b) for(int i = (a); i <(b); ++i)
//  可以取代常用的 迴圈表示法節省打字時間


const int N=10000000;

struct TS{
    int a,b,c;
};


inline bool cmp(const TS& t1,const TS& t2){
    if(t1.a != t2.a) return t1.a <t2.a;
    if(t1.a != t2.a) return t1.a <t2.a;
    return t1.c <= t2.c;
}
// 可以用於非遞迴的簡單函數 向巨集一樣直接替換使用處的程式碼

int cmp4qsort(const void *a,const void *b){
    TS *t1 = (TS*)a , *t2 = (TS*)b;
    if(t1->a != t2->a) return t1->a - t2->a;
    if(t1->b != t2->b) return t1->b - t2->b;
    return t1->c - t2->c;
}

struct cmpFunctor {
    inline bool operator () (const TS& t1 , const TS& t2){
        if(t1.a != t2.a) return t1.a < t2.a;
        if(t1.b != t2.b) return t1.b < t2.b;
        return t1.c <= t2.c;
    }
};


TS tss[N];

void genData(){
    _for(i,0,N){
        tss[i].a = rand();
        tss[i].b = rand();  // rand() is in stdlib
        tss[i].c = rand();

    }
}

int main(){
    srand(time(NULL));

    genData();
    clock_t start = clock();
    sort(tss,tss+N,cmp);
    printf("sort by fuction poiter: %ld\n",clock()-start);

    genData();
    start = clock();
    sort(tss,tss+N,cmpFunctor());
    printf("sort by functor : %ld\n",clock()-start);

    genData();
    start = clock();
    qsort(tss,N,sizeof(TS),cmp4qsort);
    printf("sort by fuction pointer : %ld\n",clock()-start);

    return 0;
}

// sort by fuction poiter: 889
// sort by functor : 702
// sort by fuction pointer : 1503


#if 0 
    // 整數輸入
    int readInt(){
        int x;
        scanf("%d",&x);
        return x;
    }

    vector<int> vc;
    vc.push_back(readInt());
#endif