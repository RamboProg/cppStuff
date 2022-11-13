#include <iostream>
#include <cmath>
using namespace std;
double f(double x);
double integral(double a, double b, int n);
int main(void)
{
    double a, b;
    int n;
    cout << "Limit left, right and number of intervals:";
    cin >> a >> b >> n;
    cout << "Result:" << integral(a, b, n) << '\n';
    return 0;
}
double f(double x)
{
    return exp(-x * x);
}
double integral(double a, double b, int n)
{
    double area = 0, h;
    int i;
    h = (b - a) / n;
    for (i = 0; i < n; i++)
        area = area + h * f(a + i * h);
    return area;
}