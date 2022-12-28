#include<iostream>
#include<stdio.h>

using namespace std;

// struct Rectangle{
//     int length;
//     int rectangle;
// };

// 2nd method for declaring a variable outside main function- Global function
// struct Rectangle r1; 

// 3rd Method

// struct Rectangle{
//     int length;
//     int rectangle;
// }r1;


struct Rectangle{
    int length;
    int breadth;
    char x; // padding (occupies extra space)
};

int main(){
    struct Rectangle r1={10,5};
    cout<<"The size of rectangle structure: "<<sizeof(r1)<<endl;  // long unsigned integer
    cout<<"The area of rectangle: "<<r1.length*r1.breadth;
    return 0;
}