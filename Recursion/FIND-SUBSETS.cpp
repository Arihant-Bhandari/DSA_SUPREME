#include <iostream>
#include <vector>
using namespace std;

void findSubsets(int arr[], int size, int index, vector<int> subsets)
{
    if(index >= size) 
    {
        cout << "Subset: [";
        for(int i = 0; i < subsets.size(); i++)
        {
            if(i < subsets.size() - 1) cout << subsets[i] << ", ";
            else cout << subsets[i];
        }
        cout << "]";
        cout << endl;
        return;
    }
    
    findSubsets(arr, size, index + 1, subsets);

    subsets.push_back(arr[index]);
    findSubsets(arr, size, index + 1, subsets);
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

    vector<int> subsets;

    findSubsets(arr, n, 0, subsets);
            
    return 0;
}