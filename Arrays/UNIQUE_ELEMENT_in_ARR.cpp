#include <iostream>
using namespace std;

int uniqueElement(int arr[], int size)
{
    int unique = 0;

    for(int i = 0; i < size; i++)
    unique ^= arr[i];
    return unique;
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

    cout<<"UNIQUE VALUE: " << uniqueElement(arr, n);
    return 0;
}