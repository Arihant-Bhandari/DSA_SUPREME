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
    void topological_sort(int n, stack<int> &st)
    {
        queue<int> que;
        unordered_map<int, int> indegree;

        for(int i = 0; i < n; i++)
        indegree[i] = 0;

        for(auto node : adjList)
            for(int neighbour : node.second)
            indegree[neighbour] += 1;

        for(auto node : indegree)
        if(node.second == 0) que.push(node.first);

        while(!que.empty())
        {
            int node = que.front();
            que.pop();

            st.push(node);

            for(int neighbour : adjList[node])
            {
                indegree[neighbour] -= 1;

                if(indegree[neighbour] == 0)
                que.push(neighbour);
            }
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, true);
    gh.addEdge(1, 2, true);
    gh.addEdge(2, 3, true);
    gh.addEdge(3, 0, true);

    stack<int> st;

    gh.topological_sort(4, st);

    if(st.size() != 4) cout << "CYCLE DETECTED.";
    else cout << "NO CYCLE FOUND.";
    return 0;
}