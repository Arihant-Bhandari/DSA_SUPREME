#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<2*n-2-i;j++)
        {
            cout<<"*";
        }
        for(int j = 1; j<=2*i+1; j++)
        {
            if(j%2==1)
            cout<<i+1;
            else
            cout<<"*";
        }
        for(int j = 0; j<2*n-2-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}