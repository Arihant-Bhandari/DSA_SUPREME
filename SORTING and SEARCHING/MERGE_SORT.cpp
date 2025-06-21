#include <iostream>
using namespace std;

void merge(int arr[], int start, int end)
{
    int mid = start + (end - start) / 2;
    int lenLeft = mid - start + 1;
    int lenRight = end - mid;

    int* leftArr = new int[lenLeft];
    int* rightArr = new int[lenRight];

    for(int i = 0; i < lenLeft; i++)
    leftArr[i] = arr[i + start];

    for(int i = 0; i < lenRight; i++)
    rightArr[i] = arr[i + mid + 1];

    int left = 0;
    int right = 0;
    int main = start;

    while(left < lenLeft && right < lenRight)
    {
        if(leftArr[left] < rightArr[right]) arr[main++] = leftArr[left++];
        else arr[main++] = rightArr[right++]; 
    }

    while(left < lenLeft)
    arr[main++] = leftArr[left++];

    while(right < lenRight)
    arr[main++] = rightArr[right++];

    delete[] leftArr;
    delete[] rightArr;
}
void mergeSort(int arr[], int left, int right)
{
    if(left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, right);
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

    cout << "\nMERGE SORT: ASCENDING ORDER\n\n";
    
    mergeSort(arr, 0, n - 1);

    for(int i : arr) cout << i << " ";
    
    return 0;
}