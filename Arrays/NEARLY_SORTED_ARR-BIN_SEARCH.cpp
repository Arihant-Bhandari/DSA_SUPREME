#include <iostream>
using namespace std;

int search(int arr[], int size, int target)
{
    int start = 0, end = size - 1;

    do
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
        return mid;
        else if(mid - 1 >= 0 && arr[mid - 1] == target)
        return mid - 1;
        else if(mid + 1 < size && arr[mid + 1] == target)
        return mid + 1;
        else if(arr[mid] > target)
        end = mid - 2;
        else
        start = mid + 2;
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

    int k;
    cout << "Enter TARGET: ";
    cin >> k;

    cout << "Found at INDEX: " << search(arr, n, k);

    return 0;
}