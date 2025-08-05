#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size for MAX HEAP: ";
    cin >> n;

    priority_queue<int> que;

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter VALUE: ";
        cin >> data;

        que.push(data);
    }

    while(!que.empty())
    {
        cout << "TOP ELEMENT: " << que.top() << endl;

        cout << "SIZE: " << que.size() << endl;

        que.pop();
    }

    return 0;
}