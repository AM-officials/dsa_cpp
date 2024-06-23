#include<iostream>

using namespace std;

int main(){
    int a=10;
    //declaring a pointer
    int *p;
    //assigning address of a to the pointer
    p=&a;
    //this will print the address of variable that is reffered
    cout<<p<<endl;
    //derefferencing the value through pointer, this will print the value stored in the address reffered to pointer
    cout<<*p;
    //allocation of memory in Heap
    int *q;
    q=new int[5];
    //how memory is allocated in heap using C 
    //q=(int *)mallock(5*sizeof(int))
    //instead of sizeof(int) you can also use the no of bytes you want to assign in the heap memory
}