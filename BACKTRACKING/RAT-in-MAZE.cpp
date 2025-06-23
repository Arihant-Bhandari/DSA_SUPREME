#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int** maze, vector<vector<bool>> &visited, int newx, int newy, int rows, int cols)
{
    if(0 <= newx && newx < rows && 0 <= newy && newy < cols && maze[newx][newy] == 1 && visited[newx][newy] == false) return true;
    else return false;
}
void explore(int** maze, int rows, int cols, string &output, int srcx, int srcy, vector<vector<bool>> &visited)
{
    if(srcx == rows - 1 && srcy == cols - 1)
    {
        cout << output << endl;
        return;
    }

    // NORTH or UP
    int newx = srcx - 1;
    int newy = srcy;
    if(isSafe(maze, visited, newx, newy, rows, cols))
    {
        visited[newx][newy] = true;
        output.push_back('U');
        explore(maze, rows, cols, output, srcx - 1, srcy, visited);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // EAST or RIGHT
    newx = srcx;
    newy = srcy + 1;
    if(isSafe(maze, visited, newx, newy, rows, cols))
    {
        visited[newx][newy] = true;
        output.push_back('R');
        explore(maze, rows, cols, output, srcx, srcy + 1, visited);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // SOUTH or DOWN
    newx = srcx + 1;
    newy = srcy;
    if(isSafe(maze, visited, newx, newy, rows, cols))
    {
        visited[newx][newy] = true;
        output.push_back('D');
        explore(maze, rows, cols, output, srcx + 1, srcy, visited);
        output.pop_back();
        visited[newx][newy] = false;
    }

    // WEST or LEFT
    newx = srcx;
    newy = srcy - 1;
    if(isSafe(maze, visited, newx, newy, rows, cols))
    {
        visited[newx][newy] = true;
        output.push_back('L');
        explore(maze, rows, cols, output, srcx, srcy - 1, visited);
        output.pop_back();
        visited[newx][newy] = false;
    }
}
int main()
{
    int n, m;
    cout << "Enter DIMENSIONS of MAZE (space-seperated): ";
    cin >> n >> m;

    int** maze = new int*[n];

    for(int i = 0; i < n; i++)
    {
        maze[i] = new int[m];
        for(int j = 0; j < m; j++)
        {
            int data;
            cout << "Enter validity of path at " << i << "th row and " << j << "th column" << ": ";
            cin >> data;

            maze[i][j] = data;
        }
    }

    string output = "";
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int srcx = 0;
    int srcy = 0;

    cout << "PATHS: " << endl << endl;

    if(maze[srcx][srcy] == 0 || maze[n -1][m - 1] == 0) cout << "NO PATH EXISTS.";
    else
    {
        visited[srcx][srcy] = true;
        explore(maze, n, m, output, srcx, srcy, visited);
    }

    for(int i = 0; i < n; i++) delete[] maze[i];
    delete[] maze;
    
    return 0;
}