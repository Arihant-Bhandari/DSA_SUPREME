#include <iostream>
using namespace std;

int dearrange(int size)
{
    if(size <= 1) return 0;
    if(size == 2) return 1;

    return (size - 1) * (dearrange(size - 2) + dearrange(size - 1));
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << dearrange(n);
    return 0;
}