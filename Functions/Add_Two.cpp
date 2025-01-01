#include <iostream>
using namespace std;

int addTwo(int x, int y)
{
    return x + y;
}
int main()
{
    int m, n;
    cout<<"Enter 2 no.: ";
    cin>> m >> n;

    cout << "The resultant addition is: " << addTwo(m ,n);
    return 0;
}