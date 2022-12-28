#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    // int A[5];
    // A[0]=12;
    // A[1]=15;

    // int A[5]={1,12,4,2,3};
    // cout<<"Size of this array: "<<sizeof(A)<<endl;
    // cout<<"First element: "<<A[0]<<endl;

    int A[10]={2,4,7,3,7,4,7};
    // for(int i=0;i<10;i++){
    //     cout<<"Elements List: "<<A[i]<<endl;
    // }

    // 2nd Method for accessing all the elements
    for(int x:A){
        cout<<x<<endl;  // x will take all the array elements 1-by-1
    }

    cout<<"Size of this array: "<<sizeof(A)<<endl;
    // Inside C++ w[]e add C language code
    printf("Third Element: %d\n",A[2]);
    printf("Fifth Element: %d\n",A[5]);

    // Taking input from the user
    int n;
    cout<<"Enter Size: ";
    cin>>n;  
    int A[n]; // This will only give us the garbage values because the user has to enter the size of array
    return 0;
}