#include<iostream>
using namespace std;
 
int add(int a,int b){
    int c;
    c=a+b;
    return c;

    // a++;
    // cout<<a; 
    // The value of a is not increased even after incrementalism 
    // return 0;
}

int main(){
    int num1,num2;
    int sum;

    cout<<"Enter first value: ";
    cin>>num1;
    cout<<"Enter second value: ";
    cin>>num2;

    sum=add(num1,num2);
    cout<<"The sum is: "<<sum<<endl;

    return 0;
}