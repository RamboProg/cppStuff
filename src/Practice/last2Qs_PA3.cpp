#include <iostream>
using namespace std;

int largeIndex(int* a, int size){
    int index = 0;
    int max = 0; 
    for(int i = 0; i < size; i++){
        if(max < a[i]){
            index = i;
            max = a[i];
        }
    }


    return index;
}

void subtotal(int* a, int size){
    int* t = new int[size];

    for(int i = 0; i < size; i++){
        t[i] = a[i];
    }

    for(int i = 0; i < size; i++){
        int sub = 0;
        for(int j = 0; j <= i; j++){
            sub+= t[j];
        }
        a[i] = sub;
    }

}


int main(){
    int a[] = {1,2,1,5,9,0,71};
    cout<<largeIndex(a,7)<<endl;

    int b[] = {1,2,3,4};
    subtotal(b, 4);

    for(int i = 0; i < 4; i++){
        cout<<"Index : "<< i <<"    "<<b[i]<<endl;
    }
    
    return 0;
}
