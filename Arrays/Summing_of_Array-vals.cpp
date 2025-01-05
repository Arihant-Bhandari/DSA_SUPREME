#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i = 0; i<size(arr); i++)
    {
        cout << "Enter the value for index " << i <<": ";
        cin >> arr[i];
    }

    cout << endl;
    
    int sum = 0;
    for(int i = 0; i<size(arr); i++)
    sum += arr[i];

    cout << "Sum of array values: " << sum;
    
    return 0;
}