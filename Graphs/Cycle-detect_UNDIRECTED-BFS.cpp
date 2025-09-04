#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <queue>
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
    bool cycle(int src, unordered_map<int, bool> &visited, map<int, int> &parent)
    {
        queue<int> que;
        que.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!que.empty())
        {
            int node = que.front();
            que.pop();

            for(int neighbour : adjList[node])
            {
                if(!visited[neighbour])
                {
                    que.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = node;
                }
                else if(visited[neighbour] && parent[node] != neighbour)
                return true;
            }
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
    map<int, int> parent;

    for(auto node : gh.adjList)
    {
        if(!visited[node.first])
        {
            bool flag = gh.cycle(node.first, visited, parent);

            if(flag) cout << "CYCLE DETECTED.";
            else cout << "NO CYCLE FOUND.";
        }
    }
    return 0;
}