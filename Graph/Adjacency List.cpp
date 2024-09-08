/*
Adjacency list
Memory: O(n + m)
Neighbours of a node: O(degree(u)) //where the degree is the number of neighbors of node u
Connectivity: O(degree(u))
*/
#include<iostream>
#include<vector>
using namespace std;

const int N = 1e3 + 3;

int n, m, u, v;

/*
n: number of Nodes 
m: number of Edges
u: Node A
v: Node B
*/

// Adjacency list
vector<int> adjList[N];

// Function to print all neighbours of node u
void printNeighbours(int u) {
    for (int v : adjList[u]) {
        cout << v << " ";
    }
    cout << endl;
}

// Function to check if two nodes u and v are neighbours
bool areNeighbours(int u, int v) {
    for (int y : adjList[u]) {
        if (y == v)
            return true;
    }
    return false;
}

int main() {
  
    cin >> n >> m;    
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); // for undirected graph
    }

    int node;
    cout << "Enter a node to find its neighbours: ";
    cin >> node;
    cout << "Neighbours of node " << node << ": ";
    printNeighbours(node);

    cout << "Enter two nodes to check if they are neighbours: ";
    cin >> u >> v;
    if (areNeighbours(u, v)) {
        cout << u << " and " << v << " are neighbours." << endl;
    } else {
        cout << u << " and " << v << " are not neighbours." << endl;
    }

    return 0;
}
