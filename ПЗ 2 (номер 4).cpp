#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int i = 2, dvoichnya, desitichnaya;
    cout << "Напишите номер="; cin >> desitichnaya;
    int dvo[200];
    int t = 0;
    while (desitichnaya > 1)
    {
        dvoichnya = desitichnaya % i;
        dvo[t] = dvoichnya;
        desitichnaya /= i;
        t++;
    }
    t--;
    cout << "Результат=";
    cout << 1;
    while (t >= 0)
    {
        cout << dvo[t];
        t--;
    }
    cout << endl;
    return 0;
}

