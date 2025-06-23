#include <iostream>
using namespace std;

void permutations(string s, int index)
{
    if(index >= s.length())
    {
        cout << s << " ";
        return;
    }

    for(int j = index; j < s.length(); j++)
    {
        swap(s[index], s[j]);
        permutations(s, index + 1);
        swap(s[index], s[j]);
    }
}
int main()
{
    string s;
    cout << "Enter STRING: ";
    cin >> s;

    cout << "STRING PERMUTATIONS: ";
    permutations(s, 0);

    return 0;
}