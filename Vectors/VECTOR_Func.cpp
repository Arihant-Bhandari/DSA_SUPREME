#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v)
{
    for(int i = 0; i < v.size(); i++)
    cout << "\nELEMENT at INDEX " << i << ": " << v.at(i);
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
    }

    print(v);

    v.clear();
    
    cout << "\nCAPACITY ON CLEAR: " <<  v.capacity() << endl;

    vector<int> vec(10, -1);

    print(vec);

    vec[0] = 10;
    vec[vec.size()-1] = 100;

    cout << "\nFRONT ELEMENT: " << vec.front() << " BACK ELEMENT: " << vec.back() << endl;

    for(auto it : vec)
    cout << "\nELEMENT IN VECTOR vec: " << it;

    for(int i = 0; i < vec.size(); i++)
    vec.pop_back();
    
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(v1);

    cout << "\n\nV1: " << endl;
    print(v1);
    
    cout << "\n\nV2: " << endl;
    print(v2);

    return 0;
}