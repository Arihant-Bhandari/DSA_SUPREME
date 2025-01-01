#include <iostream>
using namespace std;

void oddEven(int n)
{
    if((n % 2) == 0)
    cout << n << " is an Even Number.";
    else
    cout << n << " is an Odd Number.";
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    oddEven(n);
    return 0;
}