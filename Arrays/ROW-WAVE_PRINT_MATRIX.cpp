#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter dimension of array: ";
    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int data;
            cout << "ENTER ELEMENT FOR CELL [" << i << ", " << j << "]: ";
            cin >> data;
            arr[i][j] = data;
        }
    }

    cout << "Row-wise WAVE PRINT: " << endl;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if((i & 1) == 0)
            {
                cout << arr[i][j] << " --> ";
            }
            else
            {
                cout << arr[i][m-j-1] << " --> ";
            }
        }
    }

    cout << "end";
    return 0;
}