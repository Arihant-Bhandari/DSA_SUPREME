#include <iostream>
#include <cmath>
using namespace std;

int number(int digits[], int size)
{
    int num = 0;
    for(int i = size; i>0; i--)
    {
        num = digits[size-i]*pow(10,i-1) + num;
    }

    return num;
}
int main()
{
    int n;
    cout << "Enter no. of digits you want: ";
    cin >> n;

    if(to_string(n).length() < 10)
    {
        int digits[n];

        int place = pow(10,n-1);
        for(int i = 0; i<n; i++)
        {
            cout << "Enter digit for " << place <<"s place: ";
            cin >> digits[i];
            place /= 10; 
        }

        cout << "Desired integer: " << number(digits, n);
    }
    else
    cout << "INVALID SIZE: expected very large number to be made into INT.";

    return 0;
}