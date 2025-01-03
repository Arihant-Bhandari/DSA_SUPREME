#include <iostream>
using namespace std;

float clearBits(int n)
{
    int count = 0; 

    while(n>0)
    {
        if((n & 1) == 0)
        ++count;
        n >>= 2;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    cout<<"Clear Bit Count: " << clearBits(n);
}