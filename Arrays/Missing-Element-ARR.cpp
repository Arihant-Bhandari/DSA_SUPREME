#include <iostream>
using namespace std;

void miss(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[abs(arr[i])-1] > 0)
        arr[abs(arr[i])-1] *= -1;
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        cout << i+1 << " ";
    }
}
int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    cout << "MISSING VALUE in ARRAY: ";
    miss(arr, n);

    return 0;
}