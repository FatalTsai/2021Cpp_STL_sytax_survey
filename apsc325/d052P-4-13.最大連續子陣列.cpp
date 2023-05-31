/*

8
4 12 -17 5 8 -2 7 -3

3
-1 -1 -1

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
    LL n,max_sum=0;
    LL p_max = 0;
    scanf("%lld",&n);

    for(LL i=0;i<n;i++){
        LL tmp; scanf("%lld",&tmp);
        p_max = p_max>0 ? p_max+tmp : tmp;
        max_sum = max(p_max,max_sum);
    }
    printf("%lld\n",max_sum);
}