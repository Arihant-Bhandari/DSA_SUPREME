#include <iostream>
#include <queue>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;

    queue<char> ch;

    int frequency[26];

    for(int i = 0; i < 26; i++) frequency[i] = 0;

    for(int i = 0; i < str.length(); i++)
    {
        frequency[str[i] - 'a'] += 1;
        ch.push(str[i]);

        while(frequency[ch.front() - 'a'] > 1) ch.pop();

        if(ch.empty()) cout << "#" << " -> ";
        else cout << ch.front() << " -> ";
    }
    return 0;
}