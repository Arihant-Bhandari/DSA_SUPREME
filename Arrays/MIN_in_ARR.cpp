#include <iostream>
using namespace std;

int min(int arr[], int size)
{
    int min = INT_MAX;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }

    return min;
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

    cout << "MINIMUM VALUE in ARRAY: " << min(arr, n);
    return 0;
}