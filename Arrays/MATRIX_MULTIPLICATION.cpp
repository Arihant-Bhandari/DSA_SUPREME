#include <iostream>
using namespace std;

void printARR(int arr[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}
int main()
{
    int a[3][3], b[3][3], c[3][3];

    cout << "Enter elements for Matrix A: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl;

    cout << "Enter elements for Matrix B: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> b[i][j];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for(int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << endl;
    cout << "ARRAY A: " << endl;
    printARR(a);
    cout << endl;
    cout << "ARRAY B: " << endl;
    printARR(b);
    cout << endl;
    cout << "ARRAY C (Result of A * B): " << endl;
    printARR(c);

    return 0;
}