#include <iostream>
using namespace std;

void printDigit(int n)
{
    int place = 1;
    while(n>0)
    {
        int digit = n%10;
        cout << "Digit: " << digit << " in " << place <<"s place." << endl;
        place *= 10; 
        n = n/10;
    }
}
int main()
{
    int n;
    cout<<"Enter a no.: ";
    cin>>n;

    printDigit(n);
    return 0;
}