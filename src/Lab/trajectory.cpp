#include<cmath>
#include<iostream>
#include "toRadians.h"
#include "height.h"
#include "distance.h"
#include "time.h"
using namespace std;

int main(){
    double v, a;
    cout<<"Enter the Speed: "<<endl;
    cin>>v;

    cout<<"Enter the angle: "<<endl;
    cin>>a;

    cout<<"Throwing distance: "<<distance(v, a)<<" m"<<endl;
    cout<<"Throwing height: "<<height(v, a)<<" m"<<endl;
    cout<<"Time: "<<time(v ,a)<<" s"<<endl;
    return 0;
}