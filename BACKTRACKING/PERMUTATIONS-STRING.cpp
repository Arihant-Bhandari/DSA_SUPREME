#include <iostream>
using namespace std;

void solve(string s, int index)
{
    if(index >= s.length())
    {
        cout << s << " ";
        return;
    }

    for(int j = index; j < s.length(); j++)
    {
        swap(s[index], s[j]);
        solve(s, index + 1);
        swap(s[index], s[j]);
    }
}
int main()
{
    string s;
    cout << "Enter STRING: ";
    cin >> s;

    solve(s, 0);

    return 0;
}