#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 0) return;

    print(n - 1);

    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    print(n);
    return 0;
}