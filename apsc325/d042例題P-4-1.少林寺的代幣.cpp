#include<bits/stdc++.h>

int main(){
    const int coins[]={1,5,10,50};
    int m;  scanf("%d",&m);

    while(m--){
        int money;  scanf("%d",&money);
        int ans=0;
        for(int i=3;i>=0;i--){
            ans+=money/coins[i];
            money %= coins[i];
        }
        printf("%d\n",ans);
    }


}