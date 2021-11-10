#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double length, width;
    cout << "Введите длину="; cin >> length;
    cout << "Введите ширину="; cin >> width;
    cout << "Периметр=" << (2 * (length + width)) << endl;
    cout << "Площадь=" << (length * width) << endl;
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << ".";
        }
        cout << "\n";
    }
    return 0;
}
