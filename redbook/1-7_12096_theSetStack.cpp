#include<bits/stdc++.h>

using namespace std;

#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())

typedef set<int> Set;
map<Set,int> IDcache; // 把集合映射成ID
vector<Set> Setcache; // 根据ID取集合

// 查找给定集合x的ID。如果找不到，分配一个新ID
int ID (Set x) {
  if (IDcache.count(x)) return IDcache[x];
  Setcache.push_back(x); // 添加新集合
  return IDcache[x] = Setcache.size() - 1;
}

int main () {
  int T;
  cin >> T;
  while(T--) {
    stack<int> s; // 题目中的栈
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      string op;
      cin >> op;
      if (op[0] == 'P') s.push(ID(Set()));
      else if (op[0] == 'D') s.push(s.top());
      else {
        Set x1 = Setcache[s.top()]; s.pop();
        Set x2 = Setcache[s.top()]; s.pop();
        Set x;
        if (op[0] == 'U') set_union (x1.begin(),x1.end(), x2.begin(),x2.end(), inserter(x,x.begin()));
        if (op[0] == 'I') set_intersection (x1.begin(),x1.end(), x2.begin(),x2.end(), inserter(x,x.begin()));
        if (op[0] == 'A') { x = x2; x.insert(ID(x1)); }
        s.push(ID(x));
      }      
      cout << Setcache[s.top()].size() << endl;
    }
    cout << "***" << endl;
  }
  return 0;  
}




// #include<bits/stdc++.h>
// using namespace std;
// typedef set<int> Set;
// map<Set,int> IDcache;
// vector<Set> Setcache;

// int ID(const  Set& x){
//     if(IDcache.count(x)) return IDcache[x];

//     Setcache.push_back(x);
//     return IDcache[x] = Setcache.size()-1;
// }

// int main(){
//     // ios_base::sync_with_stdio(false),cin.tie(0);
//     int T,n;
//     scanf("%d",&T);

//     Set empty;
//     while(T--){
//         stack<int> s;
//         scanf("%d",&n);
//         for(int i=0;i<n;i++){
//             char op[10];
//             scanf("%s",&op);
//             if(op[0] == 'P') s.push(ID(empty));
//             else if (op[0] == 'D')s.push(s.top());
//             else{
//                 const Set x1 = Setcache[s.top()];s.pop();
//                 const Set x2 = Setcache[s.top()];s.pop();
//                 Set x;

//                 if(op[0] == 'U')
//                     set_union(x1.begin(),x2.end(),x2.begin(),x2.end(),inserter(x,x.begin()));
//                 if(op[0] == 'I')
//                     set_intersection(x1.begin(),x2.end(),x2.begin(),x2.end(),inserter(x,x.begin()));
//                 if(op[0] == 'A') x = x2,x.insert(ID(x1));
//                 s.push(ID(x));

//             }
//             // cout << Setcache[s.top()].size()<<endl;
//             printf("%d\n", Setcache[s.top()].size());
//         }
//         // cout <<"***"<<endl;
//         printf("***\n");
//     }





// }