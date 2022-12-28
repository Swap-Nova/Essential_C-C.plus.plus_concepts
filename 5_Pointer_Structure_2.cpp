// Dynamic object created in heap 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rect{
    int length;
    int breadth;
};

int main(){
    struct rect *p;

    // object inside a heap
    p=(struct rect*)malloc(sizeof(struct rect));

    // In c++ we can directly write this instead of using malloc
    // p= new rect;

    p->length=20;
    p->breadth=40;

    cout<<"Area of rectangle is: "<<p->length*p->breadth<<endl;
    cout<<"Address of pointer: "<<p<<endl;
    delete [ ] p; // freeing up the allocation after use
    return 0;
}