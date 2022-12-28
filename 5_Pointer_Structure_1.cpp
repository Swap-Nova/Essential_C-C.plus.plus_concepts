// Existing variable- Static Objects

#include<iostream>
#include<stdio.h>
using namespace std;

struct rect{
    int length;
    int breadth;
};

int main(){
    struct rect r={10,5};
    struct rect *p=&r;

    // for c++ language
    // (*p).length=20;

    // for c language
    p->length=20;

    cout<<r.length<<endl;
    return 0;
}