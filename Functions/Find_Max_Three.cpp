#include <iostream>
using namespace std;

int maxThree(int x, int y, int z)
{
    return (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
}
int main()
{
    int m, n, o;
    cout<<"Enter 3 no.: ";
    cin>> m >> n >> o;
    
    cout << "The maximum from these is: " << maxThree(m, n, o);
    return 0;
}