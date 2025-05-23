#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    vector<int> primes;

    for(int i = 2; i <= n; i++)
    {
        if(is_prime[i])
        {
            primes.push_back(i);
            for(int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}
void segment(int l, int r)
{
    vector<bool> is_prime(r - l + 1, true);
    vector<int> primes = sieve(sqrt(r));

    if (l <= 1) is_prime[1 - l] = false;
    if (l == 0) is_prime[0] = false;

    for(int prime : primes)
    {
        int start = max(prime * prime, ((l + prime - 1) / prime) * prime);
        for(int j = start; j <= r; j += prime)
            is_prime[j - l] = false;
    }

    for(int i = 0; i < is_prime.size(); i++)
        if(is_prime[i]) cout << (l + i) << " ";
}
int main()
{
    int n, m;
    cout << "Enter range as left and right: ";
    cin >> n >> m;

    segment(n, m);
    return 0;
}