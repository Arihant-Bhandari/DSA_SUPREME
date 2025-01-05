#include <iostream>
using namespace std;

string binary(int n)
{
    string bin = "";

    while(n>0)
    {
        bin = to_string(n & 1) + bin;
        n >>= 1;
    }

    return bin;
}
int main()
{
    int n;
    cout << "Enter a no.: ";
    cin >> n;

    cout << "BINARY: " << binary(n);
    return 0;
}