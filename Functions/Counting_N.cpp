#include <iostream>
using namespace std;

void count(int n)
{
    for(int i = 0; i < n; i++)
    cout << "Count: " << i+1 << endl;
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>> n;

    count(n);
    return 0;
}