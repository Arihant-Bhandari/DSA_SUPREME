#include <iostream>
using namespace std;

bool powerTwo(int n)
{
    if(n == 1) return true;
    if(n == 0 || (n & 1) == 1) return false;

    return powerTwo(n / 2);
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    if(powerTwo(n)) cout << "Given Number " << n << " is a power of Two.";
    else cout << "Given Number " << n << " is not a power of Two.";
    return 0;
}