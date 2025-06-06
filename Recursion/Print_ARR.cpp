#include <iostream>
using namespace std;

void print(int arr[], int size, int index)
{
    if(index == size) return;

    cout << arr[index] << " ";

    print(arr, size, index + 1);
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

    cout << "PRINTING ARRAY: ";
    print(arr, n, 0);
    return 0;
}