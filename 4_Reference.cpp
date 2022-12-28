#include<iostream>
using namespace std;
int main(){
    int a=10;
    int &r=a;
    r=25;

    // If value of r is changed then value of a will also be changed

    int b=30;
    r=b;
    cout<<a<<endl<<r<<endl;
    return 0;
}