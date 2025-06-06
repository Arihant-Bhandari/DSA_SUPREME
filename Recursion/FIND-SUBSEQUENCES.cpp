#include <iostream>
using namespace std;

void findSubsequence(string str, string output, int index)
{
    if(index == str.size()) 
    {
        cout << output << " -> ";
        return;
    }

    findSubsequence(str, output + str.at(index), index + 1);
    findSubsequence(str, output, index + 1);
}
int main()
{
    string str;
    cout << "Enter a String: ";
    cin >> str;

    findSubsequence(str, "", 0);
    return 0;
}