#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &que)
{
    if(que.empty()) return;

    int temp = que.front();
    que.pop();

    reverse(que);
    
    que.push(temp);
}
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    queue<int> que;

    for(int i = 0; i < n; i++)
    que.push(i);

    reverse(que);

    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    return 0;
}