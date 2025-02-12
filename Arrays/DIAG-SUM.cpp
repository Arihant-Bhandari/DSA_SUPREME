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
    
    int sum = 0;

    for(int i = 0; i < n; i++)
    {       
        sum += arr[i][i];
    }
    
    cout << "Sum of Diagonal Elements: " << sum << endl;
    return 0;
}