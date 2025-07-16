#include <iostream>
using namespace std;

void reverse(string &s, int left, int right)
{
    if(left >= right) return;

    swap(s[left], s[right]);

    reverse(s, left + 1, right - 1);
}
int main()
{
    string s;
    cout << "Enter STRING: ";
    cin >> s;

    reverse(s, 0, s.length() - 1);

    cout << "REVERSED STRING: " << s;

    return 0;
}