#include <iostream>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> sieve(n + 1, true);

    sieve[0] = sieve[1] = false;

    for(int i = 2; i * i <= n; i++)
    {
        if(sieve[i])
        {
            for(int j = i * i; j <= n; j += i)
            sieve[j] = false;
        }
    }
    for(int i = 2; i <= n; i++)
    if(sieve[i]) cout << i << " ";
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    sieve(n);
    return 0;
}