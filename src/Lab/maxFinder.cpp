#include <iostream>
using namespace std;

int* findMax(int &x, int &y){
    int *p1 = &x;
    int *p2 = &y;

    if(*p1 > *p2)
        return p1;
    else return p2;
}

int main(){
    int x = 69, y = 420, max = 0;
    int& xRef = x;
    int& yRef = y;
    max = *findMax(xRef, yRef);
    cout<<"The max is: "<< max <<endl;
    return 0;
}
