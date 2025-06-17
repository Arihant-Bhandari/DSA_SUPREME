#include <iostream>
#include <deque>
using namespace std;

void firstNegint(int arr[], int size, int k)
{
    deque<int> que;

    for(int i = 0; i < k; i++)
    if(arr[i] < 0) que.push_back(i);

    if (!que.empty()) cout << arr[que.front()] << " ";
    else cout << "0 ";

    for(int i = k; i < size; i++)
    {
        if(i - que.front() >= k) que.pop_front();

        if(arr[i] < 0) que.push_back(i);

        if (!que.empty()) cout << arr[que.front()] << " ";
        else cout << "0 ";
    }
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
        cout << "Enter VALUE for index " << i << ": ";
        cin >> data;

        arr[i] = data;
    }

    int k;
    cout << "Enter Window Size: ";
    cin >> k;

    cout << "First Negative Element in each WINDOW of SIZE " << k <<": ";
    firstNegint(arr, n, k);
    return 0;
}