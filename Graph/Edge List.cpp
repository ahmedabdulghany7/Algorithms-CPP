/*
Memory: O(m), where m is the number of edges
Time for storing the graph: O(m)
Neighbors of a node: O(m)
Connectivity: O(m)
*/
#include<iostream>
#include<vector>
using namespace std;

const int M = 20000+5;

int n,m,u,v;

/*
n: number of Nodes
m: number of Edges
u: Node A
v: Node B
*/

pair<int, int> edgeList[M];

// Function to print neighbors of node u
void neighbours(int u)
{
    cout << "Neighbors of node " << u << ": ";
    for (int i = 0; i < m; i++) {
        if (edgeList[i].first == u) 
            cout << edgeList[i].second << " ";
        else if (edgeList[i].second == u) 
            cout << edgeList[i].first << " ";
    }
    cout << endl;
}

// Function to check if two nodes u and v are neighbors
bool areNeighbours(int u, int v)
{
    for (int i = 0; i < m; i++) {
        if ((edgeList[i].first == u && edgeList[i].second == v) || 
            (edgeList[i].first == v && edgeList[i].second == u)) 
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        edgeList[i] = {u, v};
    }

    int node;
    cout << "Enter a node to find its neighbors: ";
    cin >> node;
    neighbours(node);

    int x, y;
    cout << "Enter two nodes to check if they are neighbors: ";
    cin >> x >> y;
    if (areNeighbours(x, y)) 
        cout << x << " and " << y << " are neighbors.\n";
    else 
        cout << x << " and " << y << " are not neighbors.\n";

    return 0;
}
