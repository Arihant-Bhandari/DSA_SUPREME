#include <iostream>
using namespace std;

void insertA(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i - 1;

        int temp = arr[i];

        while(j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = temp;
    }

    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}
void insertD(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int j = i - 1;

        int temp = arr[i];

        while(j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }

        arr[j + 1] = temp;
    }

    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter ELEMENT for index " << i << ": ";
        cin >> arr[i];
    }

    cout << "\nINSERTION SORT: ASCENDING ORDER\n\n";
    
    insertA(arr, n);

    cout << "\n\nINSERTION SORT: DESCENDING ORDER\n\n";

    insertD(arr, n);
    
    return 0;
}