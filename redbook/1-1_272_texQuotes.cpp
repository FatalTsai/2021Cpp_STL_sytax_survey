#include<bits/stdc++.h>
#include<cstdio>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);
using namespace std;

int main(){
    IOS
    int c,first = 1;
    char s[2][4]={"''","``"};
    while((c = getchar() ) != EOF){
        if(c == '"')
            printf("%s",s[first]),first ^=1;
        else
            printf("%c",c);
    }


    return 0;
}