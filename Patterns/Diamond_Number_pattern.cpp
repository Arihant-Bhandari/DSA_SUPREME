#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<n-i; j++)
        cout<<"  ";

        for(int j = i; j>0; j--)
        {
            cout<< to_string(j) + " ";
        }
        for(int j = 1; j<i; j++)
        {
            cout<< to_string(j+1) + " ";
        }

        cout<<endl;
    }
    for(int i = n-1; i>0; i--)
    {
        for(int j = 0; j<n-i; j++)
        cout<<"  ";

        for(int j = i; j>0; j--)
        {
            cout<< to_string(j) + " ";
        }
        for(int j = 1; j<i; j++)
        {
            cout<< to_string(j+1) + " ";
        }

        cout<<endl;
    }
    return 0;
}