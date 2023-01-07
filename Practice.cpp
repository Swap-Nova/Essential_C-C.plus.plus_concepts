#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

void changeLength(struct Rectangle *r,int l){
    r->length=l;
}

int area(struct Rectangle r){
    return (r.length*r.breadth);
}

int main(){
    struct Rectangle r;
    initialize(&r,20,50);
    cout<<"Length: "<<r.length<<endl;
    cout<<"Breadth: "<<r.breadth<<endl;

    changeLength(&r,30);
    cout<<"New Length: "<<r.length<<endl;

    cout<<"The area of rectangle is: "<<area(r)<<endl;

    return 0;
}