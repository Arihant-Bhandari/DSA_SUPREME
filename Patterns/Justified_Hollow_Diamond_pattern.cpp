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
        {
            if(j==0 || j==i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 1; i<n; i++)
    {
        for(int j = 0; j<i; j++)
        cout<<" ";

        for(int j = 2*(n-i)-1; j>0; j--)
        {
            if(j==2*(n-i)-1 || j==1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}