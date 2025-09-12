#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
    public:
    unordered_map<char, vector<pair<char, int>>> adjList;

    void addNode(char u)
    {
        vector<pair<char, int>> vec;
        adjList[u] = vec;
    }
    void addEdge(char u, char v, int weight, bool direction)
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
    void bellmanFord(int n, char src)
    {
        vector<int> dist(n, INT_MAX);
        dist[src - 'A'] = 0;

        for(int i = 1; i < n; i++)
        {
            for(auto node : adjList)
            {
                for(auto neighbour : node.second)
                {
                    char u = node.first;
                    char v = neighbour.first;
                    int weight = neighbour.second;

                    if(dist[u - 'A'] != INT_MAX && dist[u - 'A'] + weight < dist[v - 'A'])
                    dist[v - 'A'] = dist[u - 'A'] + weight;
                }
            } 
        }

        cout << "Checking EXISTENCE of NEGATIVE CYCLE: ";

        bool flag = false;

        for(auto node : adjList)
        {
            for(auto neighbour : node.second)
            {
                char u = node.first;
                char v = neighbour.first;
                int weight = neighbour.second;
                
                if(dist[u - 'A'] != INT_MAX && dist[u - 'A'] + weight < dist[v - 'A'])
                {
                        flag = true;
                    break;
                }
            }
        }

        if(flag) cout << "FOUND." << endl;
        else cout << "NONE." << endl;

        cout << "Minimum Distance of each node from Source " << src << " ";
        for(int cost : dist) cout << cost << " ";
    }
    void print()
    {
        cout << "GRAPH: " << endl;

        for(auto node : adjList)
        {
            cout << node.first << " : { ";
            for(auto neighbour : node.second)
            cout << "( " << neighbour.first << " , " << neighbour.second << " ) , ";

            cout << "}" << endl;
        }
    }
};
int main()
{
    Graph gh;

    gh.addEdge('A', 'B', -1, true);
    gh.addEdge('A', 'E', 4, true);
    gh.addEdge('B', 'C', 2, true);
    gh.addEdge('B', 'D', 2, true);
    gh.addEdge('B', 'E', 3, true);
    gh.addEdge('C', 'D', -3, true);
    gh.addEdge('D', 'B', 1, true);
    gh.addEdge('D', 'E', 5, true);

    gh.print();

    gh.bellmanFord(5, 'A');

    return 0;
}