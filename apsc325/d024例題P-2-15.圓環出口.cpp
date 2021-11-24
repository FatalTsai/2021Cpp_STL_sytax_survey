
/*

7 3
2 1 5 4 3 5 3
8 9 12

*/
#include<cstdio>

int main(){
    int n,m,p[200000+1386],room=0;
    scanf("%d%d",&n,&m);
    
    for(int i=0;i<n;i++) scanf("%d",&p[i]);
    for(int i=0;i<n;i++) p[i] += p[i-1];

    int total = p[n-1];
    for(int i=0;i<m;i++){
        int q; scanf("%d",&q);
        if(room != 0){
            q += p[room-1];
        }
        if(q>total){
            q-=total;
            room = 0;
        }
        if(p[room] >= q){
            room = (room+1)%n;
            continue;
        }

        for(int jump= (n-room+1)/2;jump>0;jump/=2){
            while (jump+room <n && p[room+jump]<q ){
                room+=jump;
            }
            
        }
        room = (room+2)%n;
    }
    printf("%d\n",room);
}