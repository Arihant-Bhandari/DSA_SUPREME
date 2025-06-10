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
void sortStack(stack<int> &st)
{
    if(st.empty()) return;

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertInSortStack(st, temp);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    stack<int> st;

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter data: ";
        cin >> data;

        st.push(data);
    }

    sortStack(st);

    cout << "STACK: " << endl;

    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}