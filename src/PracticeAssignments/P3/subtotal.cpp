#include <iostream>
using namespace std;

void subtotal(double *a, int length){
    double sumTillNow = a[0];
    a[0] = sumTillNow;
    for (int i = 1; i < length; i++){
        sumTillNow = sumTillNow + a[i];
        a[i] = sumTillNow;
    }
}

int main(){
    int length = 8;
    double a[] = {1.2,6.2,3.2,99.2,7.2,1.2,4.2,1.2};
    subtotal(a, length);
    for (int i = 0; i < length; i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
