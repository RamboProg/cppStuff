#include <iostream>
using namespace std;

int power(int m, int n){
    int res = m;
    for(int i = 1; i < n; i++){
        res = res * m;
    }
    return res;
}

int main(){
    int m, n;
    cout<<"Enter the base: "<<endl;
    cin>>m;
    cout<<"Enter the exponent: "<<endl;
    cin>>n;

    cout<<power(m,n);
    
    return 0;
}
