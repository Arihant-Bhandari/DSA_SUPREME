#include <iostream>
using namespace std;

bool palindrome(string &output)
{
    for(int i = 0; i < output.size() / 2; i++)
    if(output[i] != output[output.size() - i - 1]) return false;

    return true;
}
void partition(string &s, int growth)
{
    if(growth > s.size()) return;

    for(int i = 0; i < s.size(); i++)
    {
        if(i + growth <= s.size())
        {
            string str = s.substr(i, growth);
            if(palindrome(str)) cout << str << " ";
        }
    }
    partition(s, growth + 1);
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    cout << "PALINDROMIC PARTITIONS: ";
    partition(s, 1);
    return 0;
}