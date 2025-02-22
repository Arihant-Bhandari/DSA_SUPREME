#include <iostream>
using namespace std;

void miss(int arr[], int size)
{
    int i = 0;

    while(i < size)
    {
        int index = arr[i] - 1;

        if(arr[i] != arr[index])
        swap(arr[i], arr[index]);
        else
        i++;
    }

    for(int i = 0; i < size; i++)
    {
        if(arr[i] != i+1)
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

    cout << "Missing Elements: ";
    miss(arr, n);

    return 0;
}