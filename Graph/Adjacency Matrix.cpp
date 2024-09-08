/*
Adjacency matrix 
Memory: O(n^2) n: number of nodes
Time: O(n)
neighbours of a node: O(n)
connectivity: o(1)
*/
#include<iostream>
#include<vector>
using namespace std;

const int N = 1e3 + 3, M = 2e4 + 4;

int n,m,u,v;

/*
n: number of Nodes 
m: number of Edges
u: Node A
v: Node B
*/

bool adjMatrix[N][M];

// Function to print all neighbours of node u
void neighbours(int u) {
    for (int i = 0; i < n; i++) {
        if (adjMatrix[u][i])
            cout << i << ' ';
    }
    cout << endl;
}

// Function to check if two nodes u and v are neighbours
bool areNeighbours(int u, int v)
{
    return adjMatrix[u][v];
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adjMatrix[u][v] = true;
        adjMatrix[v][u] = true; // For undirected graph
    }

    int node;
    cout << "Enter a node to find its neighbours: ";
    cin >> node;
    cout << "Neighbours of node " << node << ": ";
    neighbours(node);
    
    cout << "Enter two nodes to check if they are neighbours: ";
    cin >> u >> v;
    if (areNeighbours(u, v)) {
        cout << u << " and " << v << " are neighbours." << endl;
    } else {
        cout << u << " and " << v << " are not neighbours." << endl;
    }

    return 0;
}

