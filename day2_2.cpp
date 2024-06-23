#include<iostream>

using namespace std;

int main(){
    int a=10;
    //initializing a refference variable.
    int &r=a;
    cout<<a<<endl<<r<<endl;
}

/*
A reference is a just another name for the same the variable
• This is use for parameter passing
• For writing small functions we use reference
*/