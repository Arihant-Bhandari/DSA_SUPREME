#include <iostream>
#include <cmath>
using namespace std;

int reverseInt(int n)
{
    int ans = 0;

    while(n>0)
    {
        int d = n%10;
        ans = ans*10 + d;
        n = n/10;
    }

    return ans;
}
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Reversed number: " << reverseInt(n);

    return 0;
}