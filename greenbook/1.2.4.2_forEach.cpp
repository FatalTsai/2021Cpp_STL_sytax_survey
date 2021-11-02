#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
using namespace std;


int main(){
    vector<int> list{1,2,3};
    int total = 0;

    //匿名函數,捕捉total
    for_each(list.begin(),list.end(),[&total](int x){ 
        total += x;
    });

    cout << "1: "<<total << endl;

    vector<int> list2{4,5,6};
    int total2 = 0;
    function<void(int)> add2 = [&total2](int x){
        total2 += x;
    };
    //將lambda直接賦值給有類型的變量然後用參數傳遞
    for_each(begin(list2) ,end(list2) ,add2);
    cout <<"2: "<< total2 << endl;

    vector<int> list3{7,8,9};
    int total3 = 0;
    auto add3 = [&total3](int x){total3+= x;};

    for_each(list3.begin(),list3.end(),add3);

    cout <<"3: "<< total3 << endl;


}