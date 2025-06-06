#include <iostream>
#include <vector>
using namespace std;

vector<int> print(string str, int index, char target)
{
    vector<int> answer;

    if(index == str.size()) return answer;
    if(str[index] == target) answer.push_back(index);

    vector<int> recurse = print(str, index + 1, target);

    for(int i : recurse) answer.push_back(i);

    return answer;
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;

    char key;
    cout << "Enter KEY Character: ";
    cin >> key;

    cout << "TARGET found at INDICES: ";
    for(int i : print(s, 0, key)) cout << i << " ";
    return 0;
}