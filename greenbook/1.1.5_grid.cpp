#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0), cin.tie(0);

using namespace std;

struct Point{
    int x, y;
    Point(int x, int y) : x(x), y(y){};
    void print();
};

Point operator+(const Point& A, const Point& B){
    return Point(A.x + B.x, A.y + B.y);
}

Point operator-(const Point& A, const Point& B){
    return Point(A.x - B.x, A.y - B.y);
}

Point operator*(const Point& A,int p){
    return Point(A.x * p, A.y * p);
}

bool operator==(const Point& A,const Point& B){
    return (A.x == B.x && A.y == B.y);
}

bool operator<(const Point& A,const Point& B){
    return A.x < B.x || (A.x == B.x && A.y < B.y);
}

istream& operator>>(istream& is, Point& p){
    return is>>p.x>>p.y;

}

void Point::print(){
    printf("(%d,%d)",this->x,this->y);
}


int main(){

    Point tmp(8,7);

    tmp.print();

}