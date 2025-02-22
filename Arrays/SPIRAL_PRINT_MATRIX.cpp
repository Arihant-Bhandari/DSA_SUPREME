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

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "SPIRAL PRINT: " << endl;

    int sRow = 0, eRow = n-1, sCol = 0, eCol = m-1;

    int count = n*m;

    while(count > 0)
    {
        for(int j = sCol; j <= eCol && count > 0; j++)
        {
            cout << arr[sRow][j] << " --> ";
            count--;
        }
        sRow++;
        for(int i = sRow; i <= eRow && count > 0; i++)
        {
            cout << arr[i][eCol] << " --> ";
            count--;
        }
        eCol--;
        for(int j = eCol; j >= sCol && count > 0; j--)
        {
            cout << arr[eRow][j] << " --> ";
            count--;
        }
        eRow--;
        for(int i = eRow; i >= sRow && count > 0; i--)
        {
            cout << arr[i][sCol] << " --> ";
            count--;
        }
        sCol++;
    }

    cout << "end";
    return 0;
}