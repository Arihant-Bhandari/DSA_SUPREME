#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
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
    void djikstraShortestPath(int n, int src, int desc)
    {
        vector<int> dist(n + 1, INT_MAX);
        set<pair<int, int>> st;

        st.insert(make_pair(0, src));
        dist[src] = 0;

        while(!st.empty())
        {
            auto top = st.begin();
            pair<int, int> node = *top;

            int minDist = node.first;
            int minNode = node.second;

            st.erase(st.begin());

            for(auto neighbour : adjList[minNode])
            {
                int neighbourNode = neighbour.first;
                int neighbourDist = neighbour.second;
                if(neighbourDist + minDist < dist[neighbourNode])
                {
                    auto prev = st.find(make_pair(dist[neighbourNode], neighbourNode));

                    if(prev != st.end())
                    st.erase(prev);

                    dist[neighbourNode] = neighbourDist + minDist;

                    st.insert(make_pair(dist[neighbourNode], neighbourNode));
                }
            }
        }

        cout << "Shortest distance from " << src << " to " << desc << " is: " << dist[desc] << endl;
    }
    void print()
    {

    }
};
int main()
{
    Graph gh;

    gh.addEdge(1, 2, 7, true);
    gh.addEdge(2, 3, 10, true);
    gh.addEdge(2, 5, 15, true);
    gh.addEdge(3, 4, 2, true);
    gh.addEdge(3, 5, 11, true);
    gh.addEdge(4, 6, 9, true);
    gh.addEdge(5, 6, 6, true);

    gh.djikstraShortestPath(6, 2, 6);
    return 0;
}