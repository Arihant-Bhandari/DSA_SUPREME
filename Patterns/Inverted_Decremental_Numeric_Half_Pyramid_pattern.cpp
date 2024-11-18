#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count = n*(n+1)/2;


    for(int i = 0; i<n; i++)
    {
        for(int j = n; j>i; j--)
        {
            cout<<count--;
        }
        cout<<endl;
    }
    
    return 0;
}