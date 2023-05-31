#include<bits/stdc++.h>
using namespace std;
const int maxN = 100010;
typedef struct  seq
{
    int left, right;

    bool operator <(seq x){
        return this->left < x.left;
    }

}seq;



int main(){

    int n,total = 0;
    seq s[maxN];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d%d",&s[i].left,&s[i].right);

    sort(s,s+n);
    seq last = s[0];
    for(int i=1;i<n;i++){
        if(s[i].left > last.right){ //disjoin
            total += last.right - last.left;
            last = s[i];
        }
        else{
            last.right = max(last.right , s[i].right);
        }
    }
    total += last.right - last.left;

    printf("%d\n",total);

}