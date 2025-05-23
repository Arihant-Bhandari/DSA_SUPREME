#include <iostream>
using namespace std;

int exponent(int a, int b)
{
    int ans = 1;

    while(b > 0)
    {
        if((b & 1) == 1)
        ans *= a;

        a *= a;

        b >>= 1;
    }

    return ans;
}
int main()
{
    int n, m;
    cout << "Enter numbers: ";
    cin >> n >> m;

    cout << "EXPONENTIATION: " << exponent(n, m);
    return 0;
}