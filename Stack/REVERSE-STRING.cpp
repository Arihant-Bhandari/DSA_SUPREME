#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    stack<char> st;

    for(char ch : s)
    st.push(ch);

    cout << "REVERSED STRING: ";

    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}