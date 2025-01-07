#include <iostream>
using namespace std;

void byREF(int &n)
{
    cout << "INSIDE byREF(): Address: " << &n << endl;
    n++;
}
int byVAL(int n)
{
    cout << "INSIDE byVAL(): Address: " << &n << endl;
    return n+1;
}
int main()
{
    int n;
    cout << "ENTER value: ";
    cin >> n;

    cout << "ORIGINAL: " << n << " ADDRESS: " << &n << endl;
    
    cout << "CALL by VALUE: " << byVAL(n) << endl;
    
    cout << "CALL by REFERENCE: ";

    byREF(n);
    
    cout << n;
    return 0;
}