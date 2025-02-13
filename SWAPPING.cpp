#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter numbers to be swapped: ";
    cin >> n >> m;

    int choice;
    cout << "CHOOSE: \n1. add-sub \n2. xor \n3. temp variable\n\nENTER: ";
    cin >> choice;

    int temp = 0;

    switch(choice)
    {
        case 1:
            n = n + m;
            m = n - m;
            n = n - m;
        break;
        case 2:
            n ^= m;
            m ^= n;
            n ^= m;  
        break;
        case 3:
            temp = n;
            n = m;
            m = temp;
        break;
        default:
        cout << "INVALID CHOCICE";
    }

    cout << "After SWAP: " << n << " " << m;
    return 0;
}