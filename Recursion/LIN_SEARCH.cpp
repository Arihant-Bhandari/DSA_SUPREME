#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int index, int key)
{
    if(index < size)
    {
        if(arr[index] == key) return index;
        return linearSearch(arr, size, index + 1, key);
    }
    
    return -1;
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

    int index = linearSearch(arr, n, 0, key);

    if(index < 0)
    cout << "KEY not found.";
    else
    cout << "KEY found at index: " << index;
    
    return 0;
}