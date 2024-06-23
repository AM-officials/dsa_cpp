#include<iostream>

using namespace std;

struct Rectangle{
    int len;
    int bre;
};

int main(){
    /*This is another way to perform struct struct operations
    Rectangle r;
    r.len=2;
    r.bre=5;*/
    struct Rectangle r={2,5};
    cout<<"area is "<<r.len*r.bre;
    return 0;
}