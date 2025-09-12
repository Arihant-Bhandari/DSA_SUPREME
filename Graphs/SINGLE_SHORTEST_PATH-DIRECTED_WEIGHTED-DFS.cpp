#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
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
    void topologicalSort_dfs(int src, unordered_map<int, bool> &visited, stack<int> &topology)
    {
        visited[src] = true;

        for(auto node : adjList[src])
        {
            int neighbour = node.first;
            int weight = node.second;

            if(!visited[neighbour])
            topologicalSort_dfs(neighbour, visited, topology);
        }

        topology.push(src);
    }
    void shortestPath_dfs(stack<int> &topology, int n)
    {
        vector<int> minCost(n, INT_MAX);

        int src = topology.top();
        topology.pop();

        minCost[src] = 0;
        
        for(auto node : adjList[src])
        {
            int neighbour = node.first;
            int weight = node.second;

            if(minCost[src] + weight < minCost[neighbour])
            minCost[neighbour] = minCost[src] + weight;
        }

        while(!topology.empty())
        {
            int src = topology.top();
            topology.pop();

            for(auto node : adjList[src])
            {
                int neighbour = node.first;
                int weight = node.second;

                if(minCost[src] + weight < minCost[neighbour])
                minCost[neighbour] = minCost[src] + weight;
            }
        }

        cout << "MIN COST to each NODE from SOURCE: ";

        for(int cost : minCost) cout << cost << " ";
    }
    void print()
    {
        cout << "GRAPH: " << endl;

        for(auto node : adjList)
        {
            cout << node.first << " : { ";

            for(auto neighbour : node.second)
            cout << "( " << neighbour.first << ", "<< neighbour.second << "), ";

            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, 5, true);
    gh.addEdge(0, 2, 3, true);
    gh.addEdge(1, 3, 3, true);
    gh.addEdge(2, 1, 2, true);
    gh.addEdge(2, 3, 5, true);
    gh.addEdge(2, 4, 6, true);
    gh.addEdge(4, 3, 1, true);

    gh.print();

    int src;
    cout << "Enter Source and Destination in GRAPH: ";
    cin >> src;

    unordered_map<int, bool> visited;
    stack<int> topology;

    gh.topologicalSort_dfs(src, visited, topology);

    gh.shortestPath_dfs(topology, 5);

    return 0;
}