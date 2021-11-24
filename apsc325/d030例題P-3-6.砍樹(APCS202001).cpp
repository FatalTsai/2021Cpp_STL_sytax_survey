#include<bits/stdc++.h>
using namespace std;
const int maxN = 100000+86;
const int maxHeight = 2000000000+1386;

typedef struct tree{
    int pos,height;
    int pre=-1,next=-1;
    bool isalive = true;

    void print(){
        printf("pos=%d,height=%d,pre=%d,next=%d,isalive=%d\n",
        this->pos,this->height,this->pre,this->next,this->isalive);
    }
    
}tree;

tree Tree[maxN];
queue<int> Q;


void removeTree(int num){
    if(!Tree[num].isalive)return;
    int nextTree = Tree[num].next;
    int preTree = Tree[num].pre;

    if(Tree[num].pos + Tree[num].height <= Tree[nextTree].pos ||
        Tree[num].pos - Tree[num].height >= Tree[preTree].pos){
            Q.push(num);

                 
            Tree[preTree].next = Tree[num].next;
            Tree[nextTree].pre = Tree[num].pre;

            Tree[num].isalive = false;
    }
    return;
}




int main(){
    int n,l;    scanf("%d%d",&n,&l);

    for(int i=1;i<=n;i++) scanf("%d",&Tree[i].pos);
    for(int i=1;i<=n;i++) scanf("%d",&Tree[i].height);

    Tree[0].height = maxHeight; Tree[n+1].height = maxHeight;
    Tree[0].pos = 0; Tree[n+1].pos = l;
    Tree[0].next = 1; Tree[n+1].pre = n;

    for(int i=1;i<=n;i++){
        Tree[i].next = i+1;
        Tree[i].pre = i-1;
    }
    int expandN = n+2;

    // for(int i=0;i<expandN;i++)
    //     Tree[i].print();

    for(int i=0;i<expandN;i++)
        removeTree(i);

    int total=0,highestt=0;
    while(!Q.empty()){
        int v = Q.front();
        Q.pop();
        total++;
        highestt = max(Tree[v].height, highestt);

        int nextTree = Tree[v].next;
        int preTree = Tree[v].pre;
   
        removeTree(preTree);
        removeTree(nextTree);


    }

    
    printf("%d\n%d\n",total,highestt);


    
}



/*

6 140
10 30 50 70 100 125
30 15 55 10 55 25


*/