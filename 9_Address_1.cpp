// 2nd Method: variable data type structure on heap inside a function & return it's address

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
// #include<malloc>

using namespace std;

struct Rectangle{
    int length,breadth;
};

struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle; // c++

    // for c-programming
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=50;
    p->breadth=10;

    return p;
}

int main(){
    struct Rectangle *ptr=fun();    
    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth<<endl;
    cout<<"Area of Rectangle: "<<ptr->length*ptr->breadth<<endl;
}