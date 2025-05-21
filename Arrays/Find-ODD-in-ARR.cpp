#include <iostream>
using namespace std;

int odd(int arr[], int size)
{
    int start = 0, end = size-1;

    do
    {
        int mid = start + (end - start) / 2;

        if(((mid & 1) == 0 && arr[mid] == arr[mid + 1]) || ((mid & 1) == 1 && arr[mid] == arr[mid - 1]))
        start = mid + 1;
        else if(((mid & 1) == 0 && arr[mid] == arr[mid - 1]) || ((mid & 1) == 1 && arr[mid] == arr[mid + 1]))
        end = mid - 1;
        else
        return mid;
    } while (start <= end);
    
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

    cout << "Found at INDEX: " << odd(arr, n);

    return 0;
}