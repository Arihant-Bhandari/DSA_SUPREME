#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key)
{
    if(left > right) return -1;   

    int mid = left + (right - left) / 2;

    if(arr[mid] == key) return mid;
    else if(arr[mid] < key) return binarySearch(arr, mid + 1, right, key);
    else return binarySearch(arr, left, mid - 1, key);
}
int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    int index = binarySearch(arr, 0, n, key);

    if(index < 0)
    cout << "KEY not found.";
    else
    cout << "KEY found at index: " << index;
    
    return 0;
}