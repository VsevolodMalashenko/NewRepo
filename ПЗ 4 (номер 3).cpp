#include <iostream>
#include <string>
using namespace std;
int main()
{
    srand(time(0));
    int n, k, z, x;
    cout << "Number of rows of the first matrix ";
    cin >> n;
    cout << "Number of columns of first matrix ";
    cin >> k;
    cout << "Number of rows of the second matrix ";
    cin >> z;
    cout << "Number of columns of second matrix ";
    cin >> x;
    if (k != z) {
        cout << "Generation of these matrices is impossible" << endl;
        system("pause");
        return 0;
    }


    cout << "the first matrix\n";

    int** matrix1 = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[k];
        for (int j = 0; j < k; j++) {
            matrix1[i][j] = rand() % 15 - 10;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl << "\n";

    }

    cout << "the second matrix\n";

    int** matrix2 = new int* [z];
    for (int i = 0; i < z; i++) {
        matrix2[i] = new int[x];
        for (int j = 0; j < x; j++) {
            matrix2[i][j] = rand() % 15 - 10;
        }
    }

    for (int i = 0; i < z; i++) {
        for (int j = 0; j < x; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl << "\n";


    }
    int matrix3[1][1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < x; j++)
        {
            matrix3[i][j] = 0;
            for (int l = 0; l < z; l++)
                matrix3[i][j] = matrix3[i][j] + matrix1[i][l] * matrix2[l][j];
        }
    cout << "\nGeneration result\n";
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < x; j++)
            cout << matrix3[i][j] << "\t";
    }
    for (int i = 0; i < n; i++)
        delete[] matrix1[i];
    delete[] matrix1;
    for (int j = 0; j < z; j++)
        delete[] matrix2[j];
    delete[] matrix2;
    cout << endl;
    system("pause");
    return 0;
}





