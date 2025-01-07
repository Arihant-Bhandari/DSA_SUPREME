#include <iostream>
using namespace std;

void rShift(int arr[], int size)
{
    int temp = arr[size-1];

    for(int i = size-1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

    for(int i = 0; i<size; i++)
    cout << "\nElement in arr[] at index " << i << ": " << arr[i];
}
int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    rShift(arr, n);
    return 0;
}