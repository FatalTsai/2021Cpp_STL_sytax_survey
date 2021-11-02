#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0),cin.tie(0);
using namespace std;

template <typename TI>
struct BitOp{
    //反轉從pos開始,長度為len的區域
    inline TI flip(TI op,size_t pos,size_t len=1){
        return op^(((1<<len)-1 )<<pos);
    }

    //取得從pos開始,長度為len的區域對應的整數值
    inline TI set(TI& op,size_t pos,int v,size_t len=1){
        int o = (1<<len)-1;
        return op = ( op&(~(o<<pos) ) ) | ((v & o) << pos );
    }

    //取得從pos開始,長度為len的區域對應的整數值
    inline int get(TI op,size_t pos,size_t len=1){
        return (op>>pos) & ((1<<len)-1);
    }
};

template <typename TI>
ostream& outBits(ostream& os, TI i){
    if(i) outBits(os, (i>>1)<<(i & 1));
    return os;
}

int main(){
    IOS

    BitOp<int> fuck;
    outBits<int>(cout, fuck.get(20,1));

}