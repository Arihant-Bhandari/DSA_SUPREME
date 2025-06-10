#include <iostream>
#include <stack>
using namespace std;

bool checkRedundant(string &s)
{
    stack<char> st;

    for(char ch : s)
    {
        if(ch == '(' || ch == '+'  || ch == '-'  || ch == '*'  || ch == '/'  || ch == '%')
        st.push(ch);
        else if(ch == ')')
        {
            int op = 0;
            while(!st.empty() && st.top() != '(')
            {
                char temp = st.top();

                if(temp == '+'  || temp == '-'  || temp == '*'  || temp == '/'  || temp == '%')
                op++;

                st.pop();
            }

            st.pop();

            if(op == 0) return true;
        }
    }

    return false;
}
int main()
{
    string s;
    cout << "Enter Expression: ";
    cin >> s;

    cout << "REDUNDANCY FOUND: ";
    if(checkRedundant(s)) cout  <<"True.";
    else cout << "False.";

    return 0;
}