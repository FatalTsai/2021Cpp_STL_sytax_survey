#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  scanf("%d",&n);
    priority_queue<int,vector<int>,greater<int> > ally,enermy;

    int tmp;
    for(int i =0;i<n;i++){
        scanf("%d",&tmp);
        enermy.push(tmp);
    }

    for(int i =0;i<n;i++){
        scanf("%d",&tmp);
        ally.push(tmp);
    }
    
    int win=0;
    // printf("allytop =%d\n",ally.top());
    while(!ally.empty()){
        if(!enermy.empty() &&enermy.top() < ally.top()){
            enermy.pop();
            win++;
        }
        ally.pop();
        
        if(enermy.empty())break;
    }
    printf("%d\n",win);
}

/*
5
3 1 7 0 2
8 3 5 0 0
*/