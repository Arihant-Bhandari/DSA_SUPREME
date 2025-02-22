#include <iostream>
using namespace std;

int binSearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;

    do
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == key)
        return mid;
        else if(arr[mid] > key)
        end = mid - 1;
        else
        start = mid + 1;
    }while(start <= end);

    return -1;
}
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "TARGET: ";
    cin >> key;

    cout << "ELEMENT found at: " << binSearch(arr, n, key);
    return 0;
}