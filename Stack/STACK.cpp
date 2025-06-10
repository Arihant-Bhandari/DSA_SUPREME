#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack;

    for(int i = 0; i < 10; i++)
    stack.push(i + 1);

    if(stack.empty()) cout << "Stack is empty." << endl;
    else 
    while(!stack.empty()) 
    {
        cout << "Current TOP Element: " << stack.top() << "\tCurrent Size: " << stack.size() << endl; 
        stack.pop();
    }

    return 0;
}