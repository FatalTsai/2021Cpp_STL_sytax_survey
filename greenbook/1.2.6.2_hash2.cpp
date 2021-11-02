#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
using namespace std;

struct Type{
    int x;
    string y;
    inline bool operator==(const Type& a) const{
        return a.x == x && a.y == y;
    }
};

struct HashFunc{
    size_t operator() (const Type &o) const{
        return (hash<int>()(o.x) ) ^  ((hash<string>()(o.y) << 1 )  >>1);
    }
};



int main(){
    unordered_map<Type,string,HashFunc> testHash=
    {
        {{1,"1"},"one"},
        {{2,"2"},"two"},
        {{3,"3"},"three"}
        
    };


    for(const auto& kv : testHash){
        cout<<kv.first.x<<","<<kv.first.y<<" - "<<kv.second<<endl;
    }
    return 0;
}