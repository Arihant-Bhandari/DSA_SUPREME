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

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        
        for(int j = 0; j < n; j++)
        sum += arr[j][i];

        cout << "col: " << i << " sum: " << sum << endl;
    }
    
    return 0;
}