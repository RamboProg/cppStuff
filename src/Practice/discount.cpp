#include <iostream>
using namespace std;

int main(){
    //assuming the price of each item is 100
    int quantity;
    cout<<"Enter the amount of items in your purchase: "<<endl;
    cin>>quantity;
    double itemsCost = quantity*100;
    if((itemsCost) > 1000){
        itemsCost *= 0.9;
     }

    cout<<"The original total price: "<<(quantity*100)<<endl;
    cout<<"The final price is: "<<itemsCost<<endl;

    return 0;
}
