#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cout << "ENTER no. of ROWS: ";
    cin >> n;

    vector<vector<int>> arr(n);

    for(int i = 0; i < arr.size(); i++)
    {
        cout << "ENTER no. of COLS: ";
        cin >> m;

        arr[i] = vector<int> (m, i);
    }

    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}