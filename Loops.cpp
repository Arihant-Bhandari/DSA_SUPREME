#include <iostream>
using namespace std;

void loop()
{
    int n;
    cout<<"Enter Boundary: ";
    cin>>n;

    cout<<endl<<"For loop: "<<endl;
    for(int i = 1; i<n; i*=2)
    cout<<i<<endl;

    cout<<endl<<"While loop: "<<endl;
    int j = 1;
    while(j<n)
    {
        cout<<j<<endl;
        j*=3;
    }

    cout<<endl<<"Do-while loop: "<<endl;
    int k = 1;
    do
    {
        cout<<k<<endl;
        k*=4;
    }while(k<n);

    cout<<endl;
}
int main()
{
    loop();
    return 0;
}