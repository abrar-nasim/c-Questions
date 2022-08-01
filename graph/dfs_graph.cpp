#include<iostream>
#include<vector>
#include<list>
using namespace std;
list<int> visited[100]=false;
class Graph{
int v;
vector<list<int> > adjList;

public:
Graph(int v) {
    this->v = v;
    adjList.resize(v);
}

void addEdge(int v1, int v2){
    adjList[v1].push_back(v2);
}

void dfs(int source) {
    // take action on vertex after entering a vertex
    cout<<source<<" ";
    for(int i: adjList) {
        if(visited[i]){
            continue;
        }
        visited[i] = true;
        // take action on child before entering child node 
        dfs(i);
        // take action on child after exiting child node
    }
    //take action on vertex before exiting a vertex
}

};


int main() {
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.dfs(2);
}