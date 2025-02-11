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
    int a[3];

    for(int i = 0; i < 3; i++)
    {
        int data;
        cout << "ENTER ELEMENT FOR index " << i << ": ";
        cin >> data;
        a[i] = data;
    }

    int arr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int data;
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> data;
            arr[i][j] = data;
        }
    }

    cout << "\n1D ARRAY:" << endl;

    for(int i = 0; i < 3; i++)
    cout << "ELEMENT at INDEX " << i << ": " << a[i] << endl;

    cout << "\n2D ARRAY:\n";
    printARR(arr);

    return 0;
}