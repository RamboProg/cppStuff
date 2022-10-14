#include <iostream>
using namespace std;

int main(){
    int firstNum, secondNum;
    char c = 0;

    cout<<"Enter the first number between 32 and 255: "<<endl;
    cin>>firstNum;

    cout<<"Enter the second number between 32 and 255: "<<endl;
    cin>>secondNum;

    for(int i = firstNum; i < secondNum+1; i++){
        c = i;
        cout<<i<<" '"<<c<<"' "<<endl;
    }

    return 0;
}
