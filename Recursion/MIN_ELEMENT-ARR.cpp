#include <iostream>
using namespace std;

int minimum(int arr[], int size, int index, int min)
{
    if(index == size) return min;

    if(arr[index] < min) min = arr[index];

    return minimum(arr, size, index + 1, min);
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

    cout << "MINIMUM ELEMENT: " << minimum(arr, n, 0, INT_MAX);
    return 0;
}