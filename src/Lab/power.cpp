#include <iostream>
using namespace std;

int power(int m, int n){
    int res = 1;
    for(int i = 0; i < n; i++){
        res *= m;
    }
    return res;
}

int main(){
    int res = power(4, 2);
    cout<<res;

    return 0;
}