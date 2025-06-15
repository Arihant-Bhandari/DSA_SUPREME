#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    queue<int> que;

    for(int i = 0; i < n; i++)
    {
        que.push(i);
        cout << "BACK: " << que.back() << endl;
    }

    cout << "SIZE: " << que.size() << endl;

    while(!que.empty())
    {
        cout << "FRONT: " << que.front() << endl;
        que.pop();
    }

    return 0;
}