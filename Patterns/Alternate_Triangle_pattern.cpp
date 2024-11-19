#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=i; j++)
        {
            if(j%2==1)
            cout<<"0";
            else
            cout<<"1";
        }
        cout<<endl;
    }
    return 0;
}