#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int front = 0, end = size-1; 

    while(front < end)
    {
        if(arr[end] == 1)
        --end;
        if(arr[front] == 0)
        ++front;
        if(arr[front] == 1)
        {
            int temp = arr[front];
            arr[front] = arr[end];
            arr[end] = temp;
            front++;
            end--;
        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
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

    sort(arr, n);

    return 0;
}