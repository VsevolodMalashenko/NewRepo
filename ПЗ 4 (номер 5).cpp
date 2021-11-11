#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    srand(time(0));
    int n, k, max = 0, min;
    cout << "Number of lines   ";
    cin >> n;
    cout << "Numder of columns  ";
    cin >> k;


    int** dynamicArray = new int* [n];
    for (int i = 0; i < n; i++) {
        dynamicArray[i] = new int[k];
        for (int j = 0; j < k; j++) {
            dynamicArray[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (dynamicArray[i][j] > max)
            {
                max = dynamicArray[i][j];
            }
        }
    }
    min = dynamicArray[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (min > dynamicArray[i][j])
            {
                min = dynamicArray[i][j];
            }
        }
    }
    cout << "Maximum element " << max << endl;
    cout << "Minimum element " << min << " \n";
    for (int i = 0; i < n; i++)
    delete[] dynamicArray[i];
    delete[] dynamicArray;
    system("pause");
    return 0;
}