// #include<iostream>
// #include<vector>
// define V 5
// using namespace std;

// class Graph
// {
//     vector <int> adj[V];
//     public:
//     void addEdge(int u,int v)
//     {
//         cout<<
//     }
// }

#include <iostream>
#include <vector>
using namespace std;

class Graph 
{
    vector<vector<int>> adj;
    int V;

public:
    Graph(int V) : V(V) 
    {
        adj.resize(V);
    }

    void addEdge(int u, int v) 
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph() 
    {
        for (int v = 0; v < V; ++v) {
            cout << v;
            for (int i : adj[v]) {
                cout << "->" << i;
            }
            cout << "\n";
        }
    }
};

int main() {
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;

    Graph g(V);

    cout << "Enter the number of edges: ";
    cin >> E;

    cout << "Enter the edges (u v):\n";
    for (int i = 0; i < E; ++i) 
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    g.printGraph();
    return 0;
}
