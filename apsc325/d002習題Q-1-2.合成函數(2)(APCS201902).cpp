#include<bits/stdc++.h>

int eval(){
    int x,y,z;
    char token[10];
    scanf("%s",token);

    if(token[0] == 'f'){
        x = eval();
        return 2*x-3;
    }
    
    else if(token[0] == 'g'){
        x = eval();
        y = eval();
        return 2*x+y-7;
    }
    
    else if(token[0] == 'h'){
        x = eval();
        y = eval();
        z = eval();
        return 3*x-2*y+z;
    }
    else{
        return atoi(token);
    }

}

int main(){
    printf("%d\n",eval());
}