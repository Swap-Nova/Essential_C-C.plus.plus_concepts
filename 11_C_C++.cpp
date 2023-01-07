#include<iostream>
#include<stdio.h>

using namespace std;

class Rectangle{
    private:
        int length,breadth;
    
    public:
        Rectangle(int l, int b){
            length=l;
            breadth=b;
        }

        int area(){
            return length*breadth;
        }

        void changeLength(int l){
            length=l;
        }
};

int main(){
    Rectangle r(10,5);
    r. changeLength(10);
    r.area();
    return 0;
}