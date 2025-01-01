#include <iostream>
using namespace std;

int summation(int n)
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
    sum += i;

    return sum;
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    cout << "The summation till " << n << " is: " << summation(n);
    return 0;
}