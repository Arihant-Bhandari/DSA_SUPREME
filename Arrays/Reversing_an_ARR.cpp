#include <iostream>
using namespace std;

void reversedArr(int arr[], int size)
{
    int temp = 0;

    for(int i = 0; i < size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    for(int i = 0; i<size; i++)
    cout << "\nElement in arr[] at index " << i << ": " << arr[i];
}
void revSwap(int arr[], int size)
{
    int left = 0, right = size-1;

    while(left < right)
    swap(arr[left++], arr[right--]);

    for(int i = 0; i<size; i++)
    cout << "\nElement in arr[] at index " << i << ": " << arr[i];
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

    cout<<"\n\n\tREVERSED ARR:";
    reversedArr(arr, n);
    cout<<"\n\n\tORIGINAL ARR:";
    revSwap(arr, n);
    return 0;
}