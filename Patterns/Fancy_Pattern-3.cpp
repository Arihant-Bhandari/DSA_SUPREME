#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        int count = 1;
        for(int j = 0; j<=2*i; j++)
        {
            if(j == 0 || j == 2*i)
            cout<<"* ";
            else if(count<=i && j<=i)
            cout << to_string(count++) + " ";
            else
            cout << to_string((count--)-2) + " ";
        }
        cout<<endl;
    }
    for(int i = n; i>1; i--)
    {
        int count = 1;
        for(int j = 2*(i-2); j>=0; j--)
        {
            if(j == 0 || j == 2*(i-2))
            cout<<"* ";
            else if(count<=j)
            cout << to_string(count++) + " ";
            else
            cout << to_string((count--)-2) + " ";
        }
        cout<<endl;
    }
    return 0;
}