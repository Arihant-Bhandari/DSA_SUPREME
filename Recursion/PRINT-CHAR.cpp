#include <iostream>
#include <cstring>
using namespace std;

void print(string str, int index, char target)
{
    if(index == str.size()) return;

    if(str[index] == target) cout << index << " ";

    print(str, index + 1, target);
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    char key;
    cout << "Enter KEY Character: ";
    cin >> key;

    print(s, 0, key);
    return 0;
}