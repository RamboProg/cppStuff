#include <iostream>
using namespace std;

int main(){
    int nickle, dime, quarter, pennies;
    double dollar;

    cout<<"enter pennies: "<<endl;
    cin>> pennies;

    cout<<"enter quarters: "<<endl;
    cin>>quarter;

    cout<<"enter dimes: "<<endl;
    cin>>dime;

    cout<<"enter nickles: "<<endl;
    cin>>nickle;

    pennies += nickle * 5;
    pennies += dime * 10;
    pennies += quarter * 25;

    dollar = pennies / 100.0;
    cout<<"$"<<dollar<<endl;



    return 0;
}
