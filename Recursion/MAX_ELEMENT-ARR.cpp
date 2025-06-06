#include <iostream>
using namespace std;

int maximum(int arr[], int size, int index, int max)
{
    if(index == size) return max;

    if(arr[index] > max) max = arr[index];

    return maximum(arr, size, index + 1, max);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    cout << "MAXIMUM ELEMENT: " << maximum(arr, n, 0, INT_MIN);
    return 0;
}