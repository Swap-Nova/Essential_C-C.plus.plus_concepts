#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(int l, int b){
            length=l;
            breadth=b;
            cout<<"Length: "<<length<<endl;
            cout<<"Breadth: "<<breadth<<endl;
        }

        void changeLength(int l){
            length=l;
            cout<<"New Length: "<<length<<endl;
        }

        int area(){
            return length*breadth;
        }
};

int main(){
    Rectangle r (10,5);
    r.changeLength(20);
    cout<<"Area: "<<r.area()<<endl;
    return 0;
}