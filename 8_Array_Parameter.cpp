#include <iostream>
using namespace std;

// we can write it as pointer and declare an array inside the function---> void fun(int *A,int n)
void fun(int A[ ],int n){   
    for(int i=0;i<n;i++){
        cout<<A[i]<<endl;
    }

    // if we want to directly change the 1st element as it is a pointer, we can use call by address
    A[0]=20;
}

int main(){
    int A[ ]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    // different method for accessing the array elements
    for(int x:A){  
        cout<<x<<" ";
    }
    return 0;
}