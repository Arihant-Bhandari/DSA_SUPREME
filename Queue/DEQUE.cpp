#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> queue;

    int n;
    cout << "Enter Size: ";
    cin >> n;

    deque<int> que;

    for(int i = 0; i < n / 2; i++)
    {
        que.push_back(i);
        cout << "REAR: " << que.back() << endl;
        que.push_front(i + n / 2);
        cout << "FRONT: " << que.front() << endl;
    }

    cout << "SIZE: " << que.size() << endl;

    while(!que.empty())
    {
        cout << "FRONT: " << que.front() << endl;
        que.pop_front();
        cout << "REAR: " << que.back() << endl;
        que.pop_back();
    }
    return 0;
}