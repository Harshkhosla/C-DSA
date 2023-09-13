#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Graph represented using an adjacency list
class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adjList;

    Graph(int vertices) : V(vertices) {
        adjList.resize(vertices);
    }

    // Add an edge to the graph
    void addEdge(int v, int w) {
        adjList[v].push_back(w);
    }

    // Depth-First Search
    void DFS(int startVertex) {
        vector<bool> visited(V, false); // Keep track of visited vertices
        stack<int> stack; // Stack for DFS traversal

        // Push the starting vertex onto the stack
        stack.push(startVertex);

        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();

            // Process the current vertex if it hasn't been visited
            if (!visited[currentVertex]) {
                cout << currentVertex << " ";
                visited[currentVertex] = true;
            }

            // Push adjacent unvisited vertices onto the stack
            for (int neighbor : adjList[currentVertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                }
            }
        }
    }
};

int main() {
    // Create a graph
    Graph g(7);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);

    cout << "Depth-First Search starting from vertex 0:" << endl;
    g.DFS(0);

    return 0;
}
