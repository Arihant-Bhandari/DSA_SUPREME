#include <iostream>
using namespace std;

void pairs(int arr[], int size)
{
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        cout << arr[i] << "," << arr[j] << endl;
    }
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

    pairs(arr, n);
    return 0;
}