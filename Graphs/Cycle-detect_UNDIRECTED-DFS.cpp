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
    bool cycle(int src, unordered_map<int, bool> &visited, unordered_map<int, int> &parent)
    {
        visited[src] = true;

        for(int neighbour : adjList[src])
        {
            if(parent[src] == neighbour) continue;
            else if(!visited[neighbour])
            {
                parent[neighbour] = src;
                if(cycle(neighbour, visited, parent)) return true;
            }
            else return true;
        }

        return false;
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, false);
    gh.addEdge(1, 2, false);
    gh.addEdge(2, 3, false);
    gh.addEdge(3, 0, false);

    unordered_map<int, bool> visited;
    unordered_map<int, int> parent;

    for(auto node : gh.adjList)
    {
        if(!visited[node.first])
        {
            parent[node.first] = -1;
            bool flag = gh.cycle(node.first, visited, parent);

            if(flag) cout << "CYCLE DETECTED.";
            else cout << "NO CYCLE FOUND.";
        }
    }
    return 0;
}