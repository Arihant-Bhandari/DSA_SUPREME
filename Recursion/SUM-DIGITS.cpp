#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if(n == 0) return 0;

    return n % 10 + sumDigits(n / 10);
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << "DIGITAL SUM for each DIGIT in " << n << ": " << sumDigits(n);
    return 0;
}