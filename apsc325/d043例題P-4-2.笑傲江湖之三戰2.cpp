#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  scanf("%d",&n);
    priority_queue<int> ally,enermy;
    int tmp;
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        enermy.push(tmp);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        ally.push(tmp);
    }

    int win=0;
    while(!enermy.empty()){
        while(!enermy.empty() && enermy.top() >= ally.top()){
            enermy.pop();
        }
        if(enermy.empty())break;
        enermy.pop();
        ally.pop();
        win++;
    }
    printf("%d\n",win);

}