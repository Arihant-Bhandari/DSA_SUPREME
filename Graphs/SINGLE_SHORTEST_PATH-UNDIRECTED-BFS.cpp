#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <stack>
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
    void topological_shortestPath_bfs(int src, int desc)
    {
        queue<int> que;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        vector<int> initial;

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
            }
        }

        stack<int> path;

        while(desc != -1)
        {
            path.push(desc);
            desc = parent[desc];
        }

        cout << "MIN COST PATH: ";
        while(!path.empty())
        {
            cout << path.top() << " ";
            path.pop();
        }
    }
    void print()
    {
        cout << "GRAPH: " << endl;

        for(auto node : adjList)
        {
            cout << node.first << " : { ";
            
            for(int neighbour : node.second)
            cout << neighbour << " ";

            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, false);
    gh.addEdge(1, 2, false);
    gh.addEdge(2, 3, false);
    gh.addEdge(2, 4, false);
    gh.addEdge(4, 5, false);
    gh.addEdge(5, 6, false);

    gh.print();

    int src, desc;
    cout << "Enter Source and Destination in GRAPH: ";
    cin >> src >> desc;

    gh.topological_shortestPath_bfs(src, desc);
    
    return 0;
}