#include <iostream>
using namespace std;

int main()
{
    int arr[10];

    for(int i = 0; i<size(arr); i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    cout << endl;
    
    for(int i = 0; i<size(arr); i++)
    cout << "Element in arr[] at index " << i << ": " << arr[i] << endl;

    cout << endl;
    
    for(int i = 0; i<size(arr); i++)
    {
        arr[i] = arr[i]*2;

        cout << "Element in arr[] at index " << i << ": " << arr[i] << endl;
    }
    
    return 0;
}