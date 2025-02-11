#include <iostream>
using namespace std;

void row(int arr[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}
void col(int arr[][3])
{
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            int data;
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> data;
            arr[i][j] = data;
        }
    }

    cout << "\nROW WISE:\n";
    row(arr);
    cout << "\nCOL WISE:\n";
    col(arr);

    return 0;
}