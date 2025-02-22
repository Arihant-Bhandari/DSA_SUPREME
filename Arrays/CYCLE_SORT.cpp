#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        int index = arr[i] - 1;

        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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

    sort(arr, n);

    return 0;
}