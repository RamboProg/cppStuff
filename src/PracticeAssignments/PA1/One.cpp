#include <iostream>
using namespace std;

int locationOfLargest(int *a, int size)
{
    int max = 0;
    int loc = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            loc = i;
        }
    }
    return loc;
}

class Complex
{
private:
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
        cout << "constructor #1 called" << endl;
    }
    Complex(int r) : Complex(r, 0)
    {
        cout << "constructor #2 called" << endl;
    }
    void print()
    {
        cout << real << " + " << imag << " i" << endl;
    }
};
int main()
{
    Complex c1(4, 4);
    c1.print();
    Complex c2(2);
    c2.print();
    return 0;
}
