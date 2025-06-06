#include <iostream>
using namespace std;

void digits(int num)
{
    if(num == 0) return;

    digits(num / 10);

    cout << num % 10 << " ";
}
int main()
{
    int n;
    cout << "Enter NUMBER: ";
    cin >> n;

    cout << "DIGITS: ";
    digits(n);
    return 0;
}