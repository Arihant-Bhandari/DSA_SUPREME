#include <iostream>
using namespace std;

void invert(int arr[], int start, int end, int &sum)
{
    int mid = start + (end - start) / 2;

    int leftLen = mid - start + 1;
    int rightLen = end - mid;

    int left[leftLen];
    int right[rightLen];

    for(int i = start; i < mid + 1; i++) left[i - start] = arr[i]; 
    for(int i = mid + 1; i <= end; i++) right[i - (mid + 1)] = arr[i];

    int i = 0;
    int j = 0;
    int index = start;

    while(i < leftLen && j < rightLen)
    {
        if(left[i] < right[j])
        arr[index++] = left[i++];
        else
        {
            sum += mid + 1 - i;
            arr[index++] = right[j++];
        }
    }

    while(i < leftLen) arr[index++] = left[i++];
    while(j < rightLen) arr[index++] = right[j++];
}
void countInversions(int arr[], int left, int right, int &sum)
{
    if(left >= right) return;

    int mid = left + (right - left) / 2;
    countInversions(arr, left, mid, sum);
    countInversions(arr, mid + 1, right, sum);
    invert(arr, left, right, sum);
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

    int sum = 0;
    countInversions(arr, 0, n - 1, sum);
    
    cout << "\nINVERSIONS: " << sum << endl;

    cout << "\nMERGE SORT: ASCENDING ORDER\n";
    for(auto i : arr) cout << i << " ";
    return 0;
}