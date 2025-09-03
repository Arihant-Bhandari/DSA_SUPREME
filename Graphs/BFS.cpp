#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

class Graph
{
    public:
    unordered_map<int, vector<int>> adjList;

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
    void bfs(int src, vector<bool> &visited)
    {
        queue<int> que;
        que.push(src);
        visited[src] = true;

        while(!que.empty())
        {
            int node = que.front();
            que.pop();

            cout << node << " ";

            for(int neighbour : adjList[node])
            {
                if(!visited[neighbour])
                {
                    que.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
    void print()
    {
        cout << "GRAPH: " << endl << endl;

        for(auto node : adjList)
        {
            cout << node.first << ": { ";
            for(int neighbour : node.second)
            cout << neighbour << ", ";
            
            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(1, 2, false);
    gh.addEdge(2, 3, false);
    gh.addEdge(3, 1, false);

    gh.print();

    vector<bool> visited(3, false);

    cout << "BFS TRAVERSAL of GRAPH: ";

    for(auto node : gh.adjList)
    {
        if(!visited[node.first])
        gh.bfs(node.first, visited);
    }

    return 0;
}