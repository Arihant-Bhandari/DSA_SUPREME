#include <iostream>
using namespace std;

void primes(int n)
{
    bool flag[n+1];

    for(int i = 0; i<=n; i++)
    {
        flag[i] = false;
    }

    for(int i = 2; i*i<=n; i++)
    {
        if(flag[i] == false)
        {
            for(int j = i*i; j<=n; j+=i)
            {
                flag[j] = true;
            }
        }
    }

    for(int i = 2; i<=n;i++)
    {
        if(flag[i] == false)
        cout << i << " ";
    }
}
int main()
{
    int n;
    cout << "Enter MAX range: ";
    cin >> n;

    primes(n);
    
    return 0;
}