#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    cout << "\nELEMENT at INDEX " << i << ": " << v[i];
}

int main()
{
    vector<int> v;

    int n;
    cout << "Enter SIZE: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter DATA for index " << i << ": ";
        cin >> data;
        v.push_back(data);
        cout << "\nCAPACITY: " << v.capacity() << " SIZE: " << v.size() << endl;
    }

    print(v);

    for(int i = 0; i < n; i++)
    v.pop_back();
    
    print(v);
    
    return 0;
}