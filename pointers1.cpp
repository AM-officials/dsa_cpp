#include<iostream>

using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;
    cout<<p<<endl;
    cout<<*p;
    //allocation of memory in Heap
    int *q;
    q=new int[5];
}