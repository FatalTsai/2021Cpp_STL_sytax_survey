#include<bits/stdc++.h>
using namespace std;
const size_t maxN = 60000;
long long  seq[maxN];
size_t n,k;

bool enough(int ropelength){
    size_t  ropeLeft = k;
    long long ropeEndpos = -1;
    for(size_t i=0;i<n;i++){

        if(seq[i] <= ropeEndpos){
            // printf("    seq[%llu]=%llu ropeEnd=%llu\n",i,seq[i],ropeEndpos);
            continue;
        }
        if(ropeLeft == 0) return false;
        ropeLeft--;
        ropeEndpos = seq[i]+ropelength;
        // printf("    seq[%llu]=%llu\n",i,seq[i]);
    }

    return true;

}



int main(){
    scanf("%llu%llu",&n,&k);
    for(size_t i=0;i<n;i++) scanf("%llu",&seq[i]);
    sort(seq,seq+n);

    // printf("enough(%d) = %d\n",1,enough(1));
    // printf("enough(%d) = %d\n",2,enough(2));
    // printf("enough(%d) = %d\n",3,enough(3));

    size_t ans=0;
    for(size_t jump = (seq[n-1] - seq[0])/2 ;jump>0 ;jump>>=1){
        while(ans+jump<(seq[n-1] - seq[0]) && !enough(ans+jump))
            ans+=jump;
    }
    printf("%llu\n",ans+1);
}

/*

6 2
5 2 1 7 5 8

*/