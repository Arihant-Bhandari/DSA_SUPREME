#include <iostream>
using namespace std;

void permutation(int arr[], int size, int i)
{
    if(i >= size) 
    {
        cout << "[";
        for(int i = 0; i < size; i++) cout << arr[i] << ",";
        cout << "]";
        cout << endl;
        
        return;
    }
    for(int j = i; j < size; j++)
    {
        swap(arr[i], arr[j]);
        permutation(arr, size, i + 1);
        swap(arr[i], arr[j]);
    }
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

    cout << "ARRAY PERMUTATIONS: " << endl;
    permutation(arr, n, 0);

    return 0;
}