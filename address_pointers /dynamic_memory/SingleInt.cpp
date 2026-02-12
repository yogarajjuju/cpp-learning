#include<iostream>
using namespace std;
int main(){
    int*p = new int; // allocates memory in heap part
    *p=50;
    cout << p << endl;
    cout << *p << endl;
    delete p; 
    // since no grabage collcetor we need to free the memory manually  if we forget it will cause memory leakage ;
    p = nullptr;
    return 0;
}