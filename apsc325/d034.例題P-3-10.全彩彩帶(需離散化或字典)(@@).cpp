#include<bits/stdc++.h>
using namespace std;
const int maxN = 200086;
int colors[maxN];
vector<int> colorsSorted;


int colorID(int i){

    int res = lower_bound(colorsSorted.begin(),colorsSorted.end(),i) - colorsSorted.begin();
    return res;
}

int main(){

    int n; scanf("%d",&n);
    for(int i=0;i<n;i++)    scanf("%d",&colors[i]);


    colorsSorted.assign(colors,colors+n);



    sort(colorsSorted.begin(),colorsSorted.end());

    

    auto last = unique(colorsSorted.begin(),colorsSorted.end());
    colorsSorted.erase(last,colorsSorted.end());

    for(int i=0;i<n;i++)
        colors[i] = colorID(colors[i]);


    // for(auto ele : colorsSorted){
    //     printf("%d ",ele);
    // }
    // printf("%d\n",colorID(4));
    int allColor = colorsSorted.size();
    int reginColor = 0,laft,riight,shortest=n+86;
    int bucket[allColor+86]={0};

    for(laft=0,riight=0;riight<n;riight++){
        if(bucket[colors[riight]] == 0){
            reginColor++;
        }
        bucket[colors[riight]]++;

        while(bucket[colors[laft]] > 1){
            bucket[colors[laft]]--;
            laft++;
        }


        if(reginColor == allColor)
            shortest = min(shortest,riight-laft+1);
    }
    printf("%d\n",shortest);

}

/*

10
6 4 1 6 0 4 5 0 7 4

*/