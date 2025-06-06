#include <iostream>
#include <vector>
using namespace std;

vector<int> digits(int num)
{
    vector<int> answer;

    if(num == 0) return answer;

    vector<int> recurse = digits(num / 10);

    answer.push_back(num % 10);

    for(int i : answer) recurse.push_back(i);

    return recurse;
}
int main()
{
    int n;
    cout << "Enter NUMBER: ";
    cin >> n;

    cout << "DIGITS: ";
    for(int i : digits(n)) cout << i << " ";
    return 0;
}