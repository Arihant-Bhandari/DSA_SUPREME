#include <iostream>
using namespace std;

void find(string s, char ch, int index, int &ans)
{
    if(index >= s.length()) return;

    if(s[index] == ch) ans = index;

    find(s, ch, index + 1, ans);
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    int ans = -1;

    find(s, ch, 0, ans);

    if(ans >= 0)
    cout << "CHARACTER '" << ch << "' found LAST at INDEX: " << ans;
    else
    cout << "CHARACTER NOT FOUND.";

    return 0;
}