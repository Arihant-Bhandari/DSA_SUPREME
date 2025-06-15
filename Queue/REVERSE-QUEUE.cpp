#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void reverse(queue<int> &que)
{
    stack<int> st;

    while(!que.empty())
    {
        st.push(que.front());
        que.pop();
    }

    while(!st.empty())
    {
        que.push(st.top());
        st.pop();
    }
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