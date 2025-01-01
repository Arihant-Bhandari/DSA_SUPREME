#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count = 1;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=2*i; j++)
        {
            if(j%2==0)
            cout<<count++;
            else
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++)
    {
        int k = count-n+i;
        for(int j = 0; j<2*(n-i)-1; j++)
        {
            if(j%2==0)
            cout<<k++;
            else
            cout<<"*";
        }
        count = count-n+i;
        cout<<endl;
    }

    return 0;
}