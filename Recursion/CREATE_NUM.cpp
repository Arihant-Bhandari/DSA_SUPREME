#include <iostream>
#include <vector>
using namespace std;

int number(vector<int> num, int index, int ans)
{
    if(index == num.size()) return ans;

    return number(num, index + 1, ans * 10 + num[index]);
}
int main()
{
    int n;
    cout << "Enter length of NUMBER: ";
    cin >> n;

    vector<int> num;

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "ENTER DIGIT: ";
        cin >> data;

        num.push_back(data);
    }

    cout << "NUMBER: " << number(num, 0, 0);
    return 0;
}