#include <iostream>
using namespace std;

void selectA(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int min = i;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[min] > arr[j])
            {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < size; i++)
    cout << arr[i] << " ";
}
void selectD(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        int max = i;

        for(int j = i + 1; j < size; j++)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
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

    cout << "\nSELECTION SORT: ASCENDING ORDER\n\n";
    
    selectA(arr, n);

    cout << "\n\nSELECTION SORT: DESCENDING ORDER\n\n";

    selectD(arr, n);
    
    return 0;
}