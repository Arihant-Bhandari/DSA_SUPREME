#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int init;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<n-i; j++)
        cout<<"  ";

        init = 1;
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