#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        return i;
    }

    return -1;
}
int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    cout << endl;

    int res = linearSearch(arr, n, key);
    if(res>-1)
    cout << "Key found. index: " << res;
    else
    cout << "Key not found.";
    
    return 0;
}