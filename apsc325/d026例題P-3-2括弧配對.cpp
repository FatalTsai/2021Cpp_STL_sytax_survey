#include<bits/stdc++.h>
using namespace std;

int main(){
    char index[7]="{[(}])";
    char data[1386];
    while (scanf("%s",&data) == 1){
        stack<int> S;
        bool printYes = true;
        for(int i=0;i<strlen(data);i++){
            int symNum = strchr(index,data[i])-index;
            
            // printf("%c is no.%d\n",data[i],symNum);

            if(symNum<3)
                S.push(symNum);

            else{
                if(!S.empty() && S.top()+3 == symNum)
                    S.pop();

                else{
                    printYes = false;
                    break;
                }

            }
        }
        if(!S.empty())printYes = false;
       printf("%s\n",printYes?"yes":"no");
    }
    

}