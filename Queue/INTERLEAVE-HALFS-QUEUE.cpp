#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &fque)
{
    queue<int> sque;

    int n = fque.size();
    for(int i = 0; i < n / 2; i++)
    {
        sque.push(fque.front());
        fque.pop();
    }

    while (!sque.empty())
    {
        fque.push(sque.front());
        sque.pop();
        fque.push(fque.front());
        fque.pop();
    }
}
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    queue<int> que;

    for(int i = 0; i < n; i++)
    que.push(i + 1);

    interleave(que);

    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    return 0;
}