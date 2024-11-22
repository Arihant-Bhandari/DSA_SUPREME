#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    char ch;

    for(int i = 0; i<n; i++)
    {
        ch = 'A';
        for(int j = 0; j<=i; j++)
        {
            cout<<ch++;
        }
        --ch;
        for(int j = 0; j<i; j++)
        {
            cout<<--ch;
        }
        cout<<endl;
    }
    return 0;
}