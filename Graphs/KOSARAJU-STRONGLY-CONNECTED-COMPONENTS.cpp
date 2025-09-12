#include <iostream>
#include <unordered_map>
#include <vector>
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
    void kosaraju(int n)
    {
        stack<int> st;
        unordered_map<int, bool> visited;

        for(int i = 0; i < n; i++)
        if(!visited[i]) dfsOrdering(i, visited, st);

        unordered_map<int, vector<int>> revList;

        for(auto node : adjList)
        {
            for(auto neighbour : node.second)
            revList[neighbour].push_back(node.first);
        }

        int count = 0;
        unordered_map<int, bool> visit;

        while(!st.empty())
        {
            auto temp = st.top();
            st.pop();

            if(!visit[temp])
            {
                cout << "SCC no. " << count + 1 << ": ";
                dfs(temp, visit, revList);
                count += 1;
                
                cout << endl;
            }
        }

        cout << "STRONGLY CONNECTED COMPONENTS: " << count;
    }
    void dfs(int src, unordered_map<int, bool> &visit, unordered_map<int, vector<int>> &revList)
    {
        visit[src] = true;

        cout << src << " ";

        for(auto neighbour : revList[src])
        {
            if(!visit[neighbour])
            dfs(neighbour, visit, revList);
        }
    }
    void dfsOrdering(int src, unordered_map<int, bool> &visited, stack<int> &st)
    {
        visited[src] = true;

        for(auto node : adjList)
        {
            for(auto neighbour : node.second)
            if(!visited[neighbour]) dfsOrdering(neighbour, visited, st);
        }

        st.push(src);
    }
};
int main()
{
    Graph gh;

    gh.addEdge(0, 1, true);
    gh.addEdge(1, 2, true);
    gh.addEdge(2, 3, true);
    gh.addEdge(3, 0, true);
    gh.addEdge(2, 4, true);
    gh.addEdge(4, 5, true);
    gh.addEdge(5, 6, true);
    gh.addEdge(6, 4, true);
    gh.addEdge(5, 7, true);

    gh.kosaraju(7);

    return 0;
}