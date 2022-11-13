#include <iostream>
using namespace std;

int main(){
    int lowLimit;
    int upLimit;
    char c;
    cout<<"Enter the Upper Limit: "<<endl;
    cin>>upLimit;
    cout<<"Enter the Lower Limit: "<<endl;
    cin>>lowLimit;
    
    for(int i = lowLimit; i <= upLimit;i++){
        cout<<i<<" '"<<(char) i<<"' "<<endl;
    }
    
}