#include <iostream>
#include <stack>
#include <queue>
using namespace std;

void revK(queue<int> &que, int &k)
{
    if(k == 0 || k > que.size()) return;
     
    stack<int> st;

    for(int i = 0; i < k; i++)
    {
        st.push(que.front());
        que.pop();
    }

    while(!st.empty())
    {
        que.push(st.top());
        st.pop();
    }

    for(int i = 0; i < que.size() - k; i++)
    {
        int temp = que.front();
        que.pop();
        que.push(temp);
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

    int k;
    cout << "Enter K to reverse K-Elements: ";
    cin >> k;

    revK(que, k);

    while(!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }
    return 0;
}