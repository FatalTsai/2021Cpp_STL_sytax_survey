#include<bits/stdc++.h>
using namespace std;
const int maxN = 200000+86;

deque<int> max_q,min_q;
int seq[maxN];

void putMax(int pos){
    while(!max_q.empty() && seq[ max_q.back()]<=seq[pos])
        max_q.pop_back();
    max_q.push_back(pos);
}

void putMin(int pos){
    while(!min_q.empty() && seq[ min_q.back()]>=seq[pos])
        min_q.pop_back();
    min_q.push_back(pos);
}

void printStat(int pos,int L){
    printf("\nin the seq :");
    for(int i= (pos-L+1>0)? (pos-L+1) : 0 ;i<=pos;i++){
        printf("%d ",seq[i]);
    }
    putchar('\n');
    printf("max_q : \n");
    for(auto ele : max_q){
        printf("%d ",seq[ele]);
    }

    putchar('\n');
    printf("min_q : \n");    
    for(auto ele : min_q){
        printf("%d ",seq[ele]);
    }
    putchar('\n');

}

int main(){
    int n,L; scanf("%d%d",&n,&L);
    for(int i=0;i<n;i++)    scanf("%d",&seq[i]);

    putMax(0);
    putMin(0);
    int ans=0;
    for(int i=1;i<n;i++){
        
        if(max_q.front() <= i-L)
            max_q.pop_front();
        putMax(i);

        if(min_q.front() <= i-L)
            min_q.pop_front();
        putMin(i);

        // printf("ans = %d , diff = %d max_front=%d min_front=%d\n"
        // ,ans,max_q.front() - min_q.front() ,max_q.front(),min_q.front());

        ans = max(ans,seq[max_q.front()] - seq[min_q.front()]);
        // printStat(i,L);


    }
    printf("%d\n",ans);
}

/*

9 4
1 4 3 6 9 8 5 7 1

*/