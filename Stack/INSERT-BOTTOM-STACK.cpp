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
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    stack<int> st;

    for(int i = 1; i <= n; i++)
    st.push(i);

    int value;
    cout << "Enter value: ";
    cin >> value;

    insertBottom(st, value);

    cout << "STACK (after INSERTION): " << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}