#include <iostream>
using namespace std;

float kmToMiles(float km)
{
    return km * 0.621371;
}
int main()
{
    float km;
    cout<<"Enter Kilometers(KM) travelled: ";
    cin>>km;

    cout<<"Miles travelled: " << kmToMiles(km);
}