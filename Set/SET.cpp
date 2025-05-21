#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    set<int> s;

    for(int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter Element: ";
        cin >> x;

        s.insert(x);
    }

    for(auto i : s)
    cout << i << " ";
    return 0;
}