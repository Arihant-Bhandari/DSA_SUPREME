#include <iostream>
using namespace std;

int addThree(int x, int y, int z)
{
    return x + y + z;
}
int main()
{
    int m, n, o;
    cout<<"Enter 3 no.: ";
    cin>> m >> n >> o;
    
    cout << "The resultant addition is: " << addThree(m, n, o);
    return 0;
}