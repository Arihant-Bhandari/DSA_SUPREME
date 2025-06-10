#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &st, int value)
{
    if(st.empty()) 
    {
        st.push(value);
        return;
    }

    int temp = st.top();
    st.pop();

    insertBottom(st, value);

    st.push(temp);
}
void reverseStack(stack<int> &st)
{
    if(st.empty()) return;

    int temp = st.top();
    st.pop();

    reverseStack(st);

    insertBottom(st, temp);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    stack<int> st;

    for(int i = 0; i < n; i++)
    st.push(i);

    cout << "STACK: " << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl << endl;

    for(int i = 0; i < n; i++)
    st.push(i);

    reverseStack(st);

    cout << "STACK: " << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}