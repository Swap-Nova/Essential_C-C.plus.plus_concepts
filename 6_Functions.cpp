#include<iostream>
using namespace std;

int add (int a,int b){
    int c;
    c=a+b;
    return c;
}

int main(){
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    int sum;
    sum=add(num1,num2);
    cout<<"The sum of the two numbers are: "<<sum<<endl;
    return 0;
}