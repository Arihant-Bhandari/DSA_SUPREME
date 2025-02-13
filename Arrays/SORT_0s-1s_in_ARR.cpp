#include <iostream>
using namespace std;

void count(int arr[], int size)
{
    int zero = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        zero++;
    }

    for(int i = 0; i < size; i++)
    {
        if(zero-- > 0)
        arr[i] = 0;
        else
        arr[i] = 1;
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] <<  " ";
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

    count(arr, n);

    return 0;
}