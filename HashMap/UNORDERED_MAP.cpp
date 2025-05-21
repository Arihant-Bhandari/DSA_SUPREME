#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    unordered_map<int, int> hash;

    for(int i = 0; i < n; i++)
    hash[i] = i+1;

    for(int i = 0; i < n; i++)
    cout << "mapping: " << i << " --> " << hash[i] << endl;

    return 0;
}