#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0, end = size - 1;

    do
    {
        if(start == end)
        return start;

        int mid = start + (end - start) / 2;

        if(arr[mid] > arr[mid + 1])
        return mid;
        else if(arr[mid - 1] > arr[mid])
        return mid - 1;
        else if(arr[start] > arr[mid])
        end = mid - 1;
        else
        start = mid + 1;
    }while(start <= end);

    return -1;
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

    cout << "PIVOT Index of ARRAY: " << pivot(arr, n);

    return 0;
}