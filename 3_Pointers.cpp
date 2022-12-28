#include<iostream>
#include<stdio.h>
#include<stdlib.h> // malloc function

using namespace std;

int main(){
    // int a=10;
    // declaration of pointer
    // int *p; 
    // storing address of a in p
    // p=&a; 
    
    // cout<<"Using Pointer: "<<*p<<endl;
    // cout<<"Address: "<<p<<endl; 
    
    // OR 
    // cout<<"Address: "<<&a<<endl; 

    // ==============================================================
    // Pointer to an Array

    // int A[5]={3,6,9,12,15};
    // int *p;

    // in pointer to array no need to give '&'
    // p=A;

    int *p;
    // p=(int *)malloc(5*sizeof(int));

    // 2nd method for malloc in C++:
    p=new int[5];

    p[0]=2;p[1]=4;p[2]=6;p[3]=8;p[4]=10;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
    } 
    delete [ ]p;

    // for c-language
	// free(p);
    return 0;
}