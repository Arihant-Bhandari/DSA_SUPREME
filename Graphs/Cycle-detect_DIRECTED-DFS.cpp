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
    bool cycle(int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfs_stack)
    {
        visited[src] = true;
        dfs_stack[src] = true;

        for(int neighbour : adjList[src])
        {
            if(!visited[neighbour])
            {
                if(cycle(neighbour, visited, dfs_stack)) return true;
            }
            else if(visited[neighbour] && dfs_stack[neighbour])
            return true;
        }

        dfs_stack[src] = false;

        return false;
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, true);
    gh.addEdge(1, 2, true);
    gh.addEdge(2, 3, true);
    gh.addEdge(3, 0, true);

    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfs_stack;

    for(auto node : gh.adjList)
    {
        if(!visited[node.first])
        {
            bool flag = gh.cycle(node.first, visited, dfs_stack);

            if(flag) cout << "CYCLE DETECTED.";
            else cout << "NO CYCLE FOUND.";
        }
    }
    return 0;
}