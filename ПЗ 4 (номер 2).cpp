
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    int a;
    cout << "Amount of elements ";
    cin >> a;
    double srednee, s = 0;
    int* dynamicArray = new int[a];
    for (int i = 0; i < a; i++) {
        dynamicArray[i] = rand() % 20 - 10;
        s += dynamicArray[i];
    }
    for (int i = 0; i < a; i++) {
        cout << dynamicArray[i] << " ";
    }

    srednee = s / a;
    cout << "\n Sum of array elements = " << s << endl;
    cout << "Mean value of elements = " << srednee << endl;
    delete[] dynamicArray;


    return 0;
}
