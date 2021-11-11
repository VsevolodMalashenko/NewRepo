#include <iostream>
#include <string>
using namespace std;
int main()
{
    srand(time(0));
    int n, m;
    cout << "Number of lines ";
    cin >> n;
    cout << "Numder of columns ";
    cin >> m;
    cout << "Matrica" << endl;


    int** dynamicArray = new int* [n];
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = new int[m];
        for (int j = 0; j < m; j++) {
            dynamicArray[i][j] = rand() % 20 - 10;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << dynamicArray[i][j] << "  ";
        }
        cout << endl;

    }
    for (int i = 0; i < n; i++)
        delete[] dynamicArray[i];
    delete[] dynamicArray;


}
