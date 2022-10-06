#include <iostream>
#include"factorial.h"
using namespace std;
int main()
{
cout<<"Welcome to DataFlair tutorials!"<<endl<<endl;
int positive_integer;
cout<<"Enter a positive integer: "<<endl;
cin>>positive_integer;
cout<<"The factorial of " << positive_integer << " is: " << factorial(positive_integer) <<endl;
return 0;
}