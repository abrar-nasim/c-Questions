#include<iostream>
#include<list>
using namespace std;

class Graph{
    int v;
    list<int>* l;
    
    public: Graph(int v){
        this->v = v;
        l = new list<int> [v];
        
    }
    
    void add_edges(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }
    
    void print() {
        for(int i=0; i<v; i++) {
            cout<<i<<"->";
            for(int j : l[i]){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
    
    
    
};

int main(){
    Graph *g = new Graph(4);
    g->add_edges(0,1);
    g->add_edges(1,2);
    g->add_edges(0,2);
    g->add_edges(2,3);
    g->print();
    
}




