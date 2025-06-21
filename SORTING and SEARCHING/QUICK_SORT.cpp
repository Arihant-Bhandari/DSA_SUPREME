#include <iostream>
using namespace std;

int partition(int arr[], int left, int right)
{
    int pivot = right;
    int i = left - 1;
    int j = left;

    while(j < pivot)
    {
        if(arr[j] < arr[pivot])
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        j++;
    }
    i++;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return i;
}
void quickSort(int arr[], int left, int right)
{
    if(left >= right) return;

    int pivot = partition(arr, left, right);
    quickSort(arr, left, pivot - 1);
    quickSort(arr, pivot + 1, right);
}
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> arr[i];
    }

    cout << "\nQUICK SORT: ASCENDING ORDER\n\n";
    
    quickSort(arr, 0, n - 1);

    for(int i : arr) cout << i << " ";

    return 0;
}