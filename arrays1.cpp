#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int A[n];
    A[5]=2;
    cout<<endl;

    for(int x:A){
        cout<<x<<endl;
    }

    return 0;
}
