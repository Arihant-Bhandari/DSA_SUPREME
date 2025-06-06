#include <iostream>
#include <vector>
using namespace std;

vector<int> find(int arr[], int size, int index, int target)
{
    vector<int> answer;

    if(size == index) return answer;

    if(arr[index] == target) answer.push_back(index);

    vector<int> recurse = find(arr, size, index + 1, target);

    for(int i : recurse) answer.push_back(i);

    return answer;
}
int main()
{
    int n;
    cout << "Enter size of Array: ";
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
    cout << "Enter TARGET: ";
    cin >> target;

    cout << "TARGET found at INDICES: ";
    for(int i : find(arr, n, 0, target)) cout << i << " ";
    return 0;
}