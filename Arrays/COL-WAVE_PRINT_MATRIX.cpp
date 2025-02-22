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

    cout << "Column-wise WAVE PRINT: " << endl;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if((i & 1) == 0)
            {
                cout << arr[j][i] << " --> ";
            }
            else
            {
                cout << arr[n-j-1][i] << " --> ";
            }
        }
    }

    cout << "end";
    return 0;
}