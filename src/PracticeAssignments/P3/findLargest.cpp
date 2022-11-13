#include <iostream>
using namespace std;

int location_of_largest(int* a, int nItems){
    int max = a[0];
    int index;
    for(int i = 1; i < nItems; i++){
        if(a[i] > max){
            max = a[i];
            index = i;
        }
    }
    return index;
}


int main(){
    int const length = 8;
    int a[length] = {1,6,3,99,7,1,1,1};
    int location = location_of_largest(a,length);
    cout << location <<endl;
    return 0;
}
