#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<(n-i-1); j++)
        cout<<" ";

        for(int j = 0; j<=i; j++)
        cout<<"* ";

        cout<<endl;
    }
    for(int i = 1; i<n; i++)
    {
        for(int j = (n-i); j<n; j++)
        cout<<" ";

        for(int j = (n-i); j>0; j--)
        cout<<"* ";

        cout<<endl;
    }
    return 0;
}