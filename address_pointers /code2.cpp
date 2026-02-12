#include<iostream>
using namespace std;
void swap(int &x ,int &y){
   int tem =x;
   x=y;
   y=tem;
}
int main(){
    int x= 2;
    int y=3;
    swap(x,y);
    cout<< x<< endl;
    cout<< y<< endl;
}