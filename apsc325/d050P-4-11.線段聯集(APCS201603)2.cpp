#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  scanf("%d",&n);

    vector<pair<int,int> > s;
    
    for(int i=0;i<n;i++){
        int left,right;
        scanf("%d%d",&left,&right);
        s.push_back({left,right});
    }

    sort(s.begin(), s.end());
    int total = 0;
    pair<int, int> last = s[0];

    for(auto ele : s){
        if(ele.first > last.second){
            total += last.second - last.first;
            last = ele;
        }
        else{
            last.second = max(last.second,ele.second);
        }
    }

    total += last.second - last.first;

    printf("%d\n",total);





}