#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y = 2;
    cout << "Enter a three-digit number: " << endl;
    cin >> x;
    if (x >= 100 && x <= 999)
    {
        if (x % y == 1)
        {
            cout << "Odd" << endl;
        }
        if (x % y == 0)
        {
            cout << "Even" << endl;
        }
    }
    else
    {
        cout << "Error" << endl;
    }
    return 0;
}
