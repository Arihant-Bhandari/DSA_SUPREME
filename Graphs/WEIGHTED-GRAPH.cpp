#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
    public:
    unordered_map<int, vector<pair<int, int>>> adjList;

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
    void print()
    {
        cout << "GRAPH: " << endl << endl;

        for(auto node : adjList)
        {
            cout << node.first << ": { ";

            for(pair neighbour : node.second)
            cout << "< " << neighbour.first << ", " << neighbour.second << " >, ";

            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge(1, 2, 3, true);
    gh.addEdge(2, 3, 4, true);
    gh.addEdge(3, 1, 5, true);

    gh.print();
    
    return 0;
}