#include <iostream>
#include <cmath>
using namespace std;

bool primeNum(int n)
{
    if(n<=1)
    return false;
    
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    if(primeNum(n))
    cout << n << " is a Prime Number.";
    else
    cout << n << " is not a Prime Number.";
    return 0;
}