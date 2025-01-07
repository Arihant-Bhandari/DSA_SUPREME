#include <iostream>
using namespace std;

void lShift(int arr[], int size)
{
    int temp = arr[0];

    for(int i = 0; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    arr[size-1] = temp;

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

    lShift(arr, n);
    return 0;
}