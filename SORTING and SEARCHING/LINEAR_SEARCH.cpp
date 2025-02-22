#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter length of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key to be searched: ";
    cin >> key;

    cout << endl;

    int i = 0;
    while(i<n)
    {
        if(key == arr[i])
        break;
        i++;
    }

    if(i<n)
    cout << "Key found. index: " << i;
    else
    cout << "Key not found.";
    
    return 0;
}