#include <iostream>
using namespace std;

void sortNP(int arr[], int size)
{
    int neg = 0, pos = size-1;

    while(neg < pos)
    {
        if(arr[neg] < 0)
        ++neg;
        if(arr[pos] > 0)
        --pos;
        else
        {
            arr[pos] ^= arr[neg];
            arr[neg] ^= arr[pos];
            arr[pos] ^= arr[neg];
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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

    sortNP(arr, n);

    return 0;
}