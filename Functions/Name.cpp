#include <iostream>
using namespace std;

void name()
{
    string name;
    cout << "Enter your Name: ";
    cin >> name;
    
    cout << "Hello!! and Welcome: " << name;
}
int main()
{
    name();
    return 0;
}