#include<iostream>

using namespace std;

struct Rectangle{
    int len;
    int bre;
};

int main(){
    Rectangle *p;
    //Dynamically object created in heap and pointer pointing there
    p=new Rectangle;

    p->len=1;
    p->bre=2;

    cout<<p->bre<<endl<<p->len;

    return 0;
}