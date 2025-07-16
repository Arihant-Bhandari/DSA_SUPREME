#include <iostream>
using namespace std;

void find(string s, char ch, int index, int &ans)
{
    if(index < 0) return;

    find(s, ch, index - 1, ans);

    if(s[index] == ch) ans = index;
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    int ans;

    find(s, ch, s.length() - 1, ans);

    if(ans >= 0)
    cout << "CHARACTER '" << ch << "' found LAST at INDEX: " << ans;
    else
    cout << "CHARACTER NOT FOUND.";

    return 0;
}