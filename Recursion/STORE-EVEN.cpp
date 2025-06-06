#include <iostream>
#include <vector>
using namespace std;

void solve(int arr[], int size, int index, vector<int> &even)
{
    if(index == size) return;

    if((arr[index] & 1) == 0) even.push_back(arr[index]);

    solve(arr, size, index + 1, even);
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

    vector<int> even;

    solve(arr, n, 0, even);

    cout << "ELEMENTS in VECTOR <EVEN>: ";
    for(int i : even) cout << i << " ";
    
    return 0;
}