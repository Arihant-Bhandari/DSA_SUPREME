#include <iostream>
#include <algorithm>
using namespace std;

int combination(int arr[], int &size, int index, int &target, int sum)
{
    if(sum > target) return 0;
    if(sum == target) return 1;

    int res = 0;

    for(int j = index; j < size; j++)
    res += combination(arr, size, j, target, sum + arr[j]);

    return res;
}
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    int target;
    cout << "TARGET SUM: ";
    cin >> target;

    cout << "COMBINATION SUMS leading to TARGET SUM: " << combination(arr, n, 0, target, 0);

    return 0;
}