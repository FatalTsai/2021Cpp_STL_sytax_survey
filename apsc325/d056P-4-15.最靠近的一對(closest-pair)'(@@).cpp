#include<bits/stdc++.h>
using namespace std;
const int maxN = 10010;
const int INF = 2000000020;
struct  Point
{
    int x,y;
    bool operator<(Point A){
        return this->x < A.x;
    }
};



int main(){
    int n; scanf("%d",&n);
    Point p[maxN];
    for(int i=0;i<n;i++)
        scanf("%d%d",&p[i].x,&p[i].y);
    sort(p,p+n);
    multimap<int,int> mm;
    int min_d =INF;

    // for(int i=0;i<n;i++)
    //     printf("(%d,%d) ",p[i].x,p[i].y);

    for(int i=0;i<n;i++){
        auto it = mm.lower_bound(p[i].y -min_d);
        while(it !=mm.end() && it->first <= p[i].y+min_d){
            if(it->second < p[i].x-min_d){
                it=mm.erase(it);
            }
            else{
                min_d = min(min_d,abs(p[i].x-it->second)  \
                +abs(p[i].y - it->first  ));
                // printf("(%d,%d) - (%d,%d) = %d\n",p[i].x,p[i].y,it->second,it->first,abs(p[i].x-it->second)  \
                // +abs(p[i].y) - it->first);

                it++;

            }
        }
        mm.insert({p[i].y,p[i].x});

    }

    printf("%d\n",min_d);



}

/*

4
-1 5
4 0
3 1
-2 -3


*/