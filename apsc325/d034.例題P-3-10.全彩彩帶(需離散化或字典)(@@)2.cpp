#include<bits/stdc++.h>
using namespace std;
const int maxN=200086;
int colors[maxN];
unordered_map<int,int> dic;

int main(){
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&colors[i]);
        dic[colors[i]] = -1;
    }
    int cnt=0;
    for(auto &ele : dic){
        ele.second = cnt++;
    }
    for(int i=0;i<n;i++)
        colors[i] = dic[colors[i]];





    int lleft,rright;
    int colorTypes= dic.size(),reginTypes=0,shorttest=n+86;
    int bucket[colorTypes +86] = {0};

    // printf("colorTypes = %d\n",colorTypes);
    for(lleft=0,rright=0;rright < n; rright++){

        if( bucket[colors[rright] ] == 0 )
            reginTypes++;
        bucket[colors[rright] ]++;

        while( bucket[colors[lleft] ] > 1){
            bucket[colors[lleft] ]--;
            lleft++;
        }

        if(reginTypes == colorTypes)
            shorttest = min(shorttest,rright-lleft+1);
        
    }
    printf("%d\n",shorttest);


}

/*

10
6 4 1 6 0 4 5 0 7 4

*/