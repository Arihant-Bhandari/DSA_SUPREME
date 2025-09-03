#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
    public:
    unordered_map<int, vector<int>> adjList;

    void addNode(int u)
    {
        vector<int> vec;
        adjList[u] = vec;
    }
    void addEdge(int u, int v, bool direction)
    {
        if(direction == false)
        {
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else
        {
            adjList[u].push_back(v);
        }
    }
    void dfs(int node, vector<bool> &visited)
    {
        visited[node] = true;

        for(int neighbour : adjList[node])
        {
            if(!visited[neighbour])
            {
                dfs(neighbour, visited);
            }
        }
    }
    int connectedComponents(vector<bool> &visited)
    {
        int components = 0;

        for(auto node : adjList)
        {
            if(!visited[node.first])
            {
                dfs(node.first, visited);
                components += 1;
            }
        }

        return components;
    }
};
int main()
{
    int n, m;
    cout << "Enter number of NODES and EDGES: ";
    cin >> n >> m;

    Graph gh;

    for(int i = 0; i < n; i++)
    gh.addNode(i);

    for(int i = 0; i < m; i++)
    {
        int in, out;
        cout << "Enter SOURCE and DESTINATION: ";
        cin >> in >> out;

        gh.addEdge(in, out, false);
    }

    vector<bool> visited(n, false);

    cout << "CONNECTED COMPONENTS in GRAPH: " << gh.connectedComponents(visited);
    return 0;
}