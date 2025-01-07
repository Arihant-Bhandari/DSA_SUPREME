#include <iostream>
using namespace std;

void rShift(int arr[], int k, int size)
{
    int temp[k];

    for(int i = 0; i < k; i++)
    {
        temp[i] = arr[size - k +i];
    }

    for(int i = size-1; i > 0; i--)
    {
        arr[i] = arr[i-k];
    }

    for(int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
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

    rShift(arr, k, n);
    return 0;
}