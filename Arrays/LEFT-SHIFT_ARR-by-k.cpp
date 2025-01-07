#include <iostream>
using namespace std;

void lShift(int arr[], int k, int size)
{
    int temp[k];

    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for(int i = 0; i < size-k; i++)
    {
        arr[i] = arr[i+k];
    }

    for(int i = size-k; i < size; i++)
    {
        arr[i] = temp[i-(size-k)];
    }

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

    int k;
    cout << "Enter shift key(shift by what value): ";
    cin >> k;

    lShift(arr, k, n);
    return 0;
}