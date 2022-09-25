#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cout << "Enter the x and y coordinates: " << endl;
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << "1" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "4" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "3" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "4" << endl;
    }
    else
        cout << "0" << endl;

    return 0;
}
