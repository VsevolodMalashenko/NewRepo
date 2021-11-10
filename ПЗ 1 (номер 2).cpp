#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, a, b, c;
    float y;
    cout << "Enter a three-digit number: ";
    cin >> x;
    if (x >= 100 && x <= 1000)
    {
        a = x / 100;
        b = (x - a * 100) / 10;
        c = x - a * 100 - b * 10;
        y = (a + b + c) / 3.;
        cout << "Arithmetic mean of three digits: " << y << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
    return 0;
}
