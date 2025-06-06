#include <iostream>
using namespace std;

bool check(int arr[],  int size, int index)
{
    if(index == size) return true;

    if(arr[index] < arr[index - 1]) return false;

    return check(arr, size, index + 1);
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

    if(check(arr, n, 1)) cout << "SORTED.";
    else cout << "UNSORTED.";
    return 0;
}