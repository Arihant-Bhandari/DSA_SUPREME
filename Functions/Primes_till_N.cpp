#include <iostream>
#include <cmath>
using namespace std;

void primes(int n)
{
    bool flag[n+1];

    for(int i = 0; i<=n; i++)
    {
        flag[i] = false;
    }

    for(int i = 2; i<=n; i++)
    {
        for(int j = 2; j<=sqrt(i); j++)
        {
            if(i % j == 0)
            {
                flag[i] = true;
                break;
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