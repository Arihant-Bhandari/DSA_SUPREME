#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], int size, int index, vector<int> &odd)
{
    if(index == size) return;

    if((arr[index] & 1) == 1) odd.push_back(arr[index]);

    solve(arr, size, index + 1, odd);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE at index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    vector<int> odd;

    solve(arr, n, 0, odd);

    cout << "ELEMENTS in VECTOR <ODD>: ";
    for(int i : odd) cout << i << " ";

    return 0;
}