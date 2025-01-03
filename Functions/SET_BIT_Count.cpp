#include <iostream>
using namespace std;

float setBits(int n)
{
    int count = 0; 

    while(n>0)
    {
        if((n & 1) == 1)
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

    cout<<"Set Bit Count: " << setBits(n);
}