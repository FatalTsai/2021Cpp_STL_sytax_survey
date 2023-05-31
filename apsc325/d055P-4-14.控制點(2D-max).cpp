#include<bits/stdc++.h>
using namespace std;
const int maxN = 100030;
const int INF = 2000000000;
struct Point
{
    int x,y;

    bool operator<(Point A){
        return this->x < A.x; 
    }
};



int main(){
    int n; scanf("%d",&n);
    Point p[maxN];
    for(int i=0;i<n;i++)    scanf("%d",&p[i].x);
    for(int i=0;i<n;i++)    scanf("%d",&p[i].y);

    sort(p,p+n);
    stack<int> S;
    S.push(INF);
    for(int i=0;i<n;i++){
        while(p[i].y >= S.top())
            S.pop();
        S.push(p[i].y);
    }
    printf("%d\n",static_cast<int> (S.size()-1));



}