#include <iostream>
#include <vector>
using namespace std;

int maxSubarray(int arr[], int size)
{
    int maxi = arr[0];
    int sum = arr[0];

    for(int i = 1; i < size; i++)
    {
        sum = max(arr[i], sum + arr[i]);
        maxi = max(maxi, sum);
    }

    return maxi;
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

    cout << "Maximum Subarray Sum: " << maxSubarray(arr, n);
    return 0;
}