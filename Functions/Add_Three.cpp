#include <iostream>
using namespace std;

void addThree()
{
    int m, n, o;
    cout<<"Enter 3 no.: ";
    cin>> m >> n >> o;
    
    cout << "The resultant addition is: " << m + n + o;
}
int main()
{
    addThree();
    return 0;
}