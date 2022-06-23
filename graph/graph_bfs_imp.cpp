#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph
{
private:
    int v;
    vector<list<int> > adj;
public:
    Graph(int v){
        this->v = v;
        adj.resize(v);
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void display() {
        for(int i=0;i<v;i++) {
            cout<<v<<"->";
            for(int j: adj[i]){
                cout<<j<<",";
            }
            cout<<endl;

        }
    }

    void BFS(int s) {
        vector<bool> visited;
        visited.resize(v, false);

        list<int> queue;
        visited[s] = true;
        queue.push_back(s);

        while(!queue.empty()) {
            s = queue.front();
            cout<<s<<" ";
            queue.pop_front();

            for(auto adjacent : adj[s]) {
                if(!visited[adjacent]) {
                    visited[adjacent] = true;
                    queue.push_back(adjacent);
                }
            }

        }
    }
    
    
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
    return 0;
}