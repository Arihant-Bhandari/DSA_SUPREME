#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            cout<< to_string(j+1);
        }

        for(int j = 2*(n-i-1); j>0; j--)
        cout<<" ";

        for(int j = i; j>=0; j--)
        {
            cout<< to_string(j+1);
        }

        cout<<endl;
    }
    for(int i = n-1; i>0; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<< to_string(j);
        }

        for(int j = 0; j<2*(n-i); j++)
        cout<<" ";

        for(int j = i; j>0; j--)
        {
            cout<< to_string(j);
        }

        cout<<endl;
    }
    return 0;
}