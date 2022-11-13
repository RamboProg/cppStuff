#include <iostream>
using namespace std;
struct Triangle{
    float side1, side2, side3, angle1, angle2, angle3;
};

bool isRightAngle(Triangle t){
    if(t.angle1 == 90 || t.angle2 == 90 || t.angle3 == 90){
        return true;
    }
    return false;
}

int main(){
    Triangle tri1;
    tri1.angle1 = 30;
    tri1.angle2 = 60;
    tri1.angle3 = 90;

    cout<<boolalpha<<isRightAngle(tri1);
    return 0;
}
