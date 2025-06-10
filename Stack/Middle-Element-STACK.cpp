#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int pos, int &ans)
{
    if(pos == 1) 
    {
        ans = st.top();
        return;
    }
    
    int temp = st.top();
    st.pop();

    solve(st, pos - 1, ans);

    st.push(temp);
}
int getMiddleElement(stack<int> &st)
{
    int size = st.size();

    if(st.empty()) return -1;
    else
    {
        int pos = 0;
        if(size & 1) pos = size / 2 + 1;
        else pos = size / 2;

        int ans = -1;
        solve(st, pos, ans);

        return ans;
    }
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    stack<int> st;

    for(int i = 0; i < n; i++)
    st.push(i);

    cout << "MIDDLE ELEMENT: " << getMiddleElement(st);
    return 0;
}