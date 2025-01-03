#include <iostream>
using namespace std;

float fahrenheit(float c)
{
    return (9.0 / 5.0 * c) + 32.0;
}

float celcius(float f)
{
    return 5.0 / 9.0 * (f - 32.0);
}
int main()
{
    char ch;
    cout<<"CHOOSE:\n1. for C to F\n2. for F to C\n";
    cin>>ch;

    switch(ch)
    {
        case '1':
        {
            float c;
            cout<<"Enter Celcius: ";
            cin>>c;

            cout << "Fahrenheit: " << fahrenheit(c) << " for Celcius: " << c;
            break;
        }
        case '2':
        {
            float f;
            cout<<"Enter Fahrenheit: ";
            cin>>f;

            cout << "Celcius: " << celcius(f) << " for Fahrenheit: " << f;
            break;
        }
        default:
        {
            cout << "INVALID CHOICE: choose again.";
            main();
        }
    }
}