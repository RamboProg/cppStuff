#include <iostream>
using namespace std;

void print(int a[], int size){
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int a = 5;
    int b = 3;

    int arr[] = {1,2,3,4,5}; //This is interchangeable with the way below this 
    int* arr2 = new int[5]; // The keyword new returns the pointer not the object
    int size = sizeof(arr)/sizeof(int);
    cout<<"Size in main: "<<size<<endl; //prints 1

    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;
    arr2[3] = 4;

    print(arr, size);

    int* const p = &a; //constant pointer
    const int* pc = &a; //pointer to const value
    const int* const pcp = &a;//constant pointer to a constant value
    
    /* *pc = 2;
    a read only location */

    pc = &b;

    return 0;
}