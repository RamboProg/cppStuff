#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;

    cout << "Enter a, b and c: " << endl;
    cin >> a >> b >> c;

    int x1, x2;
    int underSqr;
    underSqr = sqrt((pow(b,2) - (4*a*c)));
    if(underSqr < 0 || a == 0){
        cout<<"No Solution!"<<endl;
    }else{
    x1 = (-b + underSqr)/(2*a);
    x2 = (-b - underSqr)/(2*a);
    }

    cout<<"X1 is equal to: "<<x1<<endl;
    cout<<"X2 is equal to: "<<x2<<endl;

    return 0;
}
