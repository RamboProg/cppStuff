#include <iostream>
using namespace std;

int *findMax(int *xp, int *yp){
    if (*xp > *yp){
        return xp;
    }
    else{
        return yp;
    }
}
int main(){
    int x = 67, y = 15, max;
    max = *findMax(&x, &y);
    cout << max;
    return 0;
}