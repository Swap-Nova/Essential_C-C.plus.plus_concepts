#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;
 
struct Rectangle{
    int length;
    int breadth;

};

// Call by value

void fun(struct Rectangle r){
    // the length will only change here and not for the actual parameter
    r.length=20;
    cout<<"Breadth: "<<r.breadth<<endl<<"Length: "<<r.length<<endl;
}

int main(){
    struct Rectangle r ={10,5};
    fun(r);
    printf("Breadth %d \n Length %d \n",r.breadth,r.length);
    cout<<"Area of rectangle: "<<r.breadth*r.length<<endl;

    return 0;
}