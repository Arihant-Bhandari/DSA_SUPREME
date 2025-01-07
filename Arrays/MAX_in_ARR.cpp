#include <iostream>
using namespace std;

int min(int arr[], int size)
{
    int max = INT_MIN;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }

    return max;
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

    cout << "MAXIMUM VALUE in ARRAY: " << min(arr, n);
    return 0;
}