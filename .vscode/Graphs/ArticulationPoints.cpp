#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Graph{
    public:
    int time;
    vector<int> dt, low;

      int V;
      vector<vector<int>> adj;

      Graph(int V){
        this->V = V;
        adj.resize(V);
      }

      void addEdge(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
      }

      void dfs(int u, int parU, set<int> &cp){
        dt[u] = low[u] = ++time;
        int children = 0;
       

        for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];

            if(dt[v] == -1){ //not visited
                children++;
                dfs(v, u, cp);
                //update low
                low[u] = min(low[u], low[v]);
                

                if(parU != -1 && low[v] >= dt[u]){  //not root node
                    cp.insert(u);
                }

             } else if(v != parU){ //back edge
                    low[u] = min(low[u], dt[v]);
                }
            }

            if(parU == -1 && children > 1){ //root node
                cp.insert(u);
            }
    
      }

      int articulationPoints(){
        time = 0;
        dt.resize(V, -1);
        low.resize(V);

        set<int> criticalPoints;

        for(int i=0; i<V; i++){
            if(dt[i] == -1){
                dfs(i, -1, criticalPoints);
            }
        }

        //Print
        for(auto val: criticalPoints){
            cout << val << " ";
        }
        cout << endl;

        return criticalPoints.size();

      }

};

int main(){
    Graph graph(6);

    graph.addEdge(1, 0);
    graph.addEdge(1, 2);
    graph.addEdge(1, 4);
    graph.addEdge(4, 5);
    graph.addEdge(4, 3);

    cout << graph.articulationPoints() << endl;


    return 0;
}