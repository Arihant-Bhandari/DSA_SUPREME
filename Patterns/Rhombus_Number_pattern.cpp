#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        cout<<" ";
        for(int j = 0; j<=i; j++)
        cout<< to_string(i+1) + " ";

        cout<<endl;
    }
    for(int i = n-1; i>0; i--)
    {
        for(int j = 0; j<n-i; j++)
        cout<<" ";
        for(int j = 0; j<i; j++)
        cout<< to_string(i) + " ";

        cout<<endl;
    }
    return 0;
}