#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double diametre, h, time, litres;
    cout<<"Enter the diametre of the pot: "<<endl;
    cin>>diametre;
    cout<<"Enter the height of the water: "<<endl;
    cin>>h;

    litres = (3.14 * pow(diametre/2.0, 2))/1000.0;

    time = litres * 2.0;

    cout<<"The time it will take for water to boil is : "<<time<<endl;


    return 0;
}
