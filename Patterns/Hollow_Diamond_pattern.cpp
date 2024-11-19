#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        for(int j = n-i-1; j>0; j--)
        cout<<"  ";

        for(int j = 0; j<(2*i+1); j++)
        {
            if(j==0 || j==(2*i))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j<i; j++)
        cout<<"  ";

        for(int j = (2*n-1)-i; j>0; j--)
        {
            if(j==(2*n-1)-i || (j-i-1)==0)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}