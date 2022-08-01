#incldue<iostream>
using namespace std;

class Graph{
    int v;
    vector<list<int> > adjList;

    Graph(int v) {
        this->vector = v;
        adjList.resize(v);
    }

    void add_edges(int v, int e) {
        adjList[v].push_back(e);
    }

    void display() {
        for(int i=0;i<v;i++) {
            cout<<i<<"->";
            for(auto j : adjList[i]){
                cout<<j<<","
            }
            cout<<endl;
        }
    }

};



int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    g.display();
 
    return 0;
}