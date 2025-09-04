#include <iostream>
#include <unordered_map>
#include <vector>
#include <map>
#include <stack>
#include<queue>
using namespace std;

class Graph
{
    public:
    unordered_map<int, vector<int>> adjList;

    void addNode(int src)
    {
        vector<int> vec;
        adjList[src] = vec;
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
    void topological_sort_dfs(int src, stack<int> &st, map<int, bool> &visited)
    {
        visited[src] = true;

        for(int neighbour : adjList[src])
        {
            if(!visited[neighbour])
            topological_sort_dfs(neighbour, st, visited);
        }

        st.push(src);
    }
    void topological_sort_bfs(int n)
    {
        queue<int> que;
        map<int, int> indegree;

        for(auto node : adjList)
        {
            for(int neighbour : node.second)
            {
                indegree[neighbour] += 1;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(indegree[i] == 0)
            {
                que.push(i);
            }
        }

        while(!que.empty())
        {
            int node = que.front();
            que.pop();

            cout << node << " ";

            for(int neighbour : adjList[node])
            {
                indegree[neighbour] -= 1;

                if(indegree[neighbour] == 0)
                que.push(neighbour);
            }
        }
    }
    void print()
    {
        cout << "GRAPH: " << endl << endl;
        
        for(auto node : adjList)
        {
            cout << node.first << " : { ";

            for(int neighbour : node.second)
            cout << neighbour << ", ";

            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, true);
    gh.addEdge(1, 2, true);
    gh.addEdge(2, 3, true);
    gh.addEdge(2, 4, true);
    gh.addEdge(3, 5, true);
    gh.addEdge(4, 5, true);
    gh.addEdge(5, 6, true);

    gh.print();

    stack<int> st;
    map<int, bool> visited;
    
    for(auto node : gh.adjList)
    {
        if(!visited[node.first])
        gh.topological_sort_dfs(node.first, st, visited);
    }

    cout << "TOPOLOGICAL SORT through DFS: ";
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop(); 
    }
    cout << endl;

    cout << "TOPOLOGICAL SORT through BFS: ";
    gh.topological_sort_bfs(7);

    return 0;
}