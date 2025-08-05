#include <iostream>
#include <queue>
using namespace std;

int kthGreatest(int arr[], int size, int k)
{
    priority_queue<int, vector<int>, greater<int>> que;

    for(int i = 0; i < k; i++)
    que.push(arr[i]);

    for(int i = k; i < size; i++)
    {
        if(que.top() < arr[i])
        {
            que.pop();
            que.push(arr[i]);
        }
    }
    return que.top();
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
    cout << "Enter K: ";
    cin >> k;

    cout << "Kth Greatest Element: " << kthGreatest(arr, n, k);

    return 0;
}