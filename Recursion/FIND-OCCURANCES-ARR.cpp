#include <iostream>
using namespace std;

void find(int arr[], int size, int index, int target)
{
    if(index == size) return;

    if(arr[index] == target) cout << index << " ";

    find(arr, size, index + 1, target);
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

    int target;
    cout << "Enter TARGET: ";
    cin >> target;

    cout << "TARGET found at INDICES: ";
    find(arr, n, 0, target);
    return 0;
}