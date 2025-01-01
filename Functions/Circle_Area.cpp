#include <iostream>
#include <cmath>
using namespace std;

float area(float radius)
{
    return M_PI*M_PI*radius;
}
int main()
{
    float radius;
    cout<<"Enter the Radius of given Circle: ";
    cin>>radius;

    cout<< area(radius) << " is the area of Cicle with given Radius.";
    return 0;
}