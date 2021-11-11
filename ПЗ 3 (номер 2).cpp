#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"Rus")
    long double l = 0, m = 1, f = 1.0;
    int i, n, t;
    cout << "Enter n = "; cin >> n;
    if (n > 0)
    {
        cout << "Первые n чисел Фибоначчи:\n";
        for (t = 1; n >= t; t++)
        {
            cout << l << endl;
            l = l + m;
            t++;
            if (n >= t)
            {
                cout << m << endl;
                m = m + l;
            }
        }
        for (i = 2; n >= i; i++)
        {
            f = f * i;
        }
        cout << "Факториал числа n = " << f << endl;
    }
    else cout << "Ошибка\n";
    return 0;
}
