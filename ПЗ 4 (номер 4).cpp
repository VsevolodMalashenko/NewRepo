
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(0));
    int a;
    cout << "Number of elements ";
    cin >> a;
    int* dynamicArray = new int[a];
    cout << "Array ";
    for (int i = 0; i < a; i++)
    {
        dynamicArray[i] = rand() % 15 - 10;
        cout << dynamicArray[i] << " ";
    }
    sort(dynamicArray, dynamicArray + a);
    cout << "\nMedian of the array " << dynamicArray[a / 2] << endl;
    int n = 0;
    cout << "Array without duplicate number ";
    for (int i = 0; i < a - n; i++)
    {
        for (int c = i + 1; c < a - n; c++)
        {
            while (dynamicArray[i] == dynamicArray[c])
            {
                for (int f = c; f < a - n; f++)
                {
                    dynamicArray[f] = dynamicArray[f + 1];
                }
                n += 1;
            }
        } 
        cout << dynamicArray[i] << " ";
    }
    delete[] dynamicArray;

    system("pause");


    return 0;




}



