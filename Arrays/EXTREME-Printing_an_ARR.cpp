#include <iostream>
using namespace std;

void extremePrint(int arr[], int size)
{
    int left = 0, right = size-1;

    while(left <= right)
    {
        cout << arr[left++] << " ";
        if(left < right)
        cout << arr[right--] << " ";
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

    cout<<"\n\n\tEXTREME PRINTING:\t";
    extremePrint(arr, n);
    return 0;
}