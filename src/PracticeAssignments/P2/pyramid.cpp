#include <iostream>
using namespace std;
void print(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
int main(){
    int limit;
    cout << "How many rows is your pyramid?\n";
    cin >> limit;
    print(limit);
    return 0;
}