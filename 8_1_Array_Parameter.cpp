// Creating an array inside an function & returning its address

#include<iostream>
using namespace std;

int *fun(int size){
    int *p;
    p=new int[size]; // accessing heap memory using pointer
    for(int i=0;i<5;i++){
        p[i]=i*2;
    }
    return p;
}

int main(){
    int *ptr,sz=5;
    ptr=fun(sz);

    for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;
    }

    return 0;
}