#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int count = n*(n+1)/2;

    string s;

    for(int i = 0; i<n; i++)
    {
        s = "";
        for(int j = n; j>i; j--)
        {
            s = to_string(count--) + s;
        }
        cout<<s<<endl;
    }
    
    return 0;
}