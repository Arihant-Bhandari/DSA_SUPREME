#include <iostream>
using namespace std;

int miss(int arr[], int size)
{
    int start = 0, end = size-1;
    int mid;

    do
    {
        mid = start + (end - start) / 2;

        if((arr[mid] - mid) == 1)
        start = mid + 1;
        else
        end = mid - 1;
    } while (start <= end);
    
    return (mid + 1  == 0) ? size : mid + 2;
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

    cout << "Missing Elements: " << miss(arr, n);

    return 0;
}