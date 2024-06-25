#include<iostream>

using namespace std;

int add(int a, int b){
    int c;
    c=a+b;
    return(c);
}

int main(){
    int x=10;
    int y=20;
    int z=add(x,y);
    cout<<z;

    return 0;
}

/*
• Function is a piece of code which performs a specific task
• Grouping instructions is called function
• They are called as modules or procedures
• The main task can be divided into several small task in the form of
functions this type of programming is also called as modular or
procedural programming.
*/