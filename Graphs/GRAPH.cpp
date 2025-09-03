#include <iostream>
#include <unordered_map>
#include <vector>
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

    gh.addEdge(1, 2, true);
    gh.addEdge(2, 3, true);
    gh.addEdge(3, 1, true);

    gh.print();
    
    return 0;
}