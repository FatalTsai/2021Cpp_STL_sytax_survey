/*
7
0 3 9 3 3 -1 0
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int,int> mmap;
    int n;
    scanf("%d",&n);
    int origin[n+386];
    for(int i=0;i<n;i++){
        scanf("%d",&origin[i]);
        mmap[ origin[i] ] = 0;

    }

    int rank = 0;
    for(auto it = mmap.begin();it!=mmap.end();++it){
        it->second = rank++;
    }

    // for(auto ele : mmap){
    //     printf("mmap[ %d ] = %d\n",ele.first,ele.second);

    // }

    // for(int i=0;i<n-1;i++)
    //     printf("%d ",mmap[origin[i]]);
    // printf("%d",mmap[origin[n-1]]);


    for(int i=0;i<n-1;i++)
        printf("%d ",mmap.find(origin[i]) ->second  );
    printf("%d",mmap[origin[n-1]]);




}