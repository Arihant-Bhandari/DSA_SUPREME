#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        string s = "";
        for(int j = i; j<=n; j++)
        {
            s = s + to_string(j) + " ";
        }

        int j = 1;
        while(j<i)
        {
            s = s + to_string(j) + " ";
            j++;
        }
        cout<<s<<endl;
    }
    return 0;
}