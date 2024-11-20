#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    char init;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<n-i; j++)
        cout<<"  ";

        init = 'A';
        for(int j = i; j>0; j--)
        {
            cout << init++;
            cout << " ";
        }

        --init;
        for(int j = 1; j<i; j++)
        {
            cout << --init;
            cout << " ";
        }

        cout<<endl;
    }
    for(int i = n-1; i>0; i--)
    {
        for(int j = 0; j<n-i; j++)
        cout<<"  ";

        init = 'A';
        for(int j = i; j>0; j--)
        {
            cout << init++;
            cout << " ";
        }

        --init;
        for(int j = 1; j<i; j++)
        {
            cout << --init;
            cout << " ";
        }

        cout<<endl;
    }
    return 0;
}