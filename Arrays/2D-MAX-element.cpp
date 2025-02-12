#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter dimension of array: ";
    cin >> n;

    int arr[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int data;
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> data;
            arr[i][j] = data;
        }
    }

    int max = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] > max)
            max = arr[i][j];
        }
    }

    cout << "MAXIMUM ELEMENT: " << max;
    
    return 0;
}