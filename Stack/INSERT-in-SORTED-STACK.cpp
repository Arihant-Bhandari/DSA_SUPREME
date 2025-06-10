#include <iostream>
#include <stack>
using namespace std;

void insertInSortStack(stack<int> &st, int value)
{
    if(st.empty() || value > st.top()) 
    {
        st.push(value);
        return;
    }

    int temp = st.top();
    st.pop();

    insertInSortStack(st, value);

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

    insertInSortStack(st, value);

    cout << "STACK: " << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}