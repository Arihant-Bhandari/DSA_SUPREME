#include <iostream>
using namespace std;

bool palindrome(string &s, int left, int right)
{
    if(left > right) return true;
    if(s[left] != s[right]) return false;

    return palindrome(s, left + 1, right - 1);
}
int main()
{
    string s;
    cout << "Enter STRING: ";
    cin >> s;

    if(palindrome(s, 0, s.length() - 1))
    cout << s << " is a PALINDROME.";
    else
    cout << s << " is NOT a PALINDROME.";

    return 0;
}