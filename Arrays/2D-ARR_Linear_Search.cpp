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

    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    cout << endl;

    bool flag = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == key)
            {
                flag = true;
                break;
            }
        }
    }

    if(flag)
    cout << "Key found.";
    else
    cout << "Key not found.";
    
    return 0;
}