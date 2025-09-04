#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int orangesRotting(vector<vector<int>> &grid)
{
    queue<pair<pair<int, int>, int>> que;

    vector<pair<int, int>> initial;

    for(int i = 0; i < grid.size(); i++)
        for(int j = 0; j < grid[0].size(); j++)
            if(grid[i][j] == 2) initial.push_back(make_pair(i, j));

    for(auto orange : initial)
    que.push(make_pair(orange, 0));

    int maxTime = 0;

    while(!que.empty())
    {
        auto orange = que.front();
        que.pop();

        int x = orange.first.first;
        int y = orange.first.second;
        int time = orange.second;

        if(0 <= y - 1 && grid[x][y - 1] == 1) 
        {
            que.push(make_pair(make_pair(x, y - 1), time + 1));
            grid[x][y - 1] = 2;
        }
        if(y + 1 < grid[0].size() && grid[x][y + 1] == 1) 
        {
            que.push(make_pair(make_pair(x, y + 1), time + 1));
            grid[x][y + 1] = 2;
        }
        if(0 <= x - 1 && grid[x - 1][y] == 1) 
        {
            que.push(make_pair(make_pair(x - 1, y), time + 1));
            grid[x - 1][y] = 2;
        }
        if(x + 1 < grid.size() && grid[x + 1][y] == 1) 
        {
            que.push(make_pair(make_pair(x + 1, y), time + 1));
            grid[x + 1][y] = 2;
        }

        maxTime = max(maxTime, time);
    }

    for(int i = 0; i < grid.size(); i++)
        for(int j = 0; j < grid[0].size(); j++)
            if(grid[i][j] == 1) return -1;

    return maxTime;
}
int main()
{
    int n, m;
    cout << "Enter dimensions of GRID: ";
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int data;
            cout << "Enter VALUE for GRID: ";
            cin >> data;

            grid[i][j] = data;
        }
    }

    cout << "MINIMUM TIME for all ORANGES to rot: " << orangesRotting(grid);

    return 0;
}