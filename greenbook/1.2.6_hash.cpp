#include <bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<string,int> um{
        {"Dijkstra",1972},{"Scott",1976},
        {"Wilkes",1967},{"Hamming",1968}
    };
    um["Ritchie"] = 1983;

    for(auto i :um)
        cout << i.first << " " << i.second << endl;

}

