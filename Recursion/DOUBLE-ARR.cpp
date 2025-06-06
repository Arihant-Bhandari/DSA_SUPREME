#include <iostream>
using namespace std;

void twice(int arr[], int size, int index)
{
    if(index == size) return;

    arr[index] *= 2;

    twice(arr, size, index + 1);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    twice(arr, n, 0);

    cout << "PRINTING ARRAY: ";
    for(int i : arr) cout << i << " ";

    return 0;
}