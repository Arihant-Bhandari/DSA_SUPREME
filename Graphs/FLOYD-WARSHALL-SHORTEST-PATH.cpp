#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
    public:
    unordered_map<int, vector<pair<int, int>>> adjList;

    void addNode(int u)
    {
        vector<pair<int, int>> vec;
        adjList[u] = vec;
    }
    void addEdge(int u, int v, int weight, bool direction)
    {
        if(direction == false)
        {
            adjList[u].push_back(make_pair(v, weight));
            adjList[v].push_back(make_pair(u, weight));
        }
        else
        {
            adjList[u].push_back(make_pair(v, weight));
        }
    }
    void floydWarshall(int n)
    {
        vector<vector<int>> dist(n, vector<int>(n, 1e9));

        for(int i = 0; i < n; i++) dist[i][i] = 0;

        for(auto node : adjList)
        {
            for(auto neighbour : node.second)
            dist[node.first][neighbour.first] = neighbour.second;
        }

        for(int h = 0; h < n; h++)
        {
            for(int s = 0; s < n; s++)
            {
                for(int d = 0; d < n; d++)
                {
                    dist[s][d] = min(dist[s][d], dist[s][h] + dist[h][d]);
                }
            }
        }

        cout << "MIN DISTANCE from every NODE to every NODE: "<< endl;
        for(int i = 0; i < n; i++)
        {
            cout << "from " << i << ":  ";
            for(int j = 0; j < n; j++)
            cout << "{ " << j << " cost: " << dist[i][j] << " } ";

            cout << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, 2, true);
    gh.addEdge(0, 3, 5, true);
    gh.addEdge(1, 0, 3, true);
    gh.addEdge(1, 3, 4, true);
    gh.addEdge(2, 1, 1, true);
    gh.addEdge(3, 2, 2, true);

    gh.floydWarshall(4);
    return 0;
}