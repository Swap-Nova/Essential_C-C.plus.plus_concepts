#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
    cout<<"Length: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;

    // Cannot delete pointer, as it will be not be allocated for the main function
    // delete [ ]p;
}

int main(){
    struct Rectangle r={10,5};
    fun(&r);

    cout<<"Area of rectangle: "<<r.length*r.breadth<<endl;
    cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;

    return 0;
}

// Both the value should be equal as we are using call be address. Reference & dereferencing the values.