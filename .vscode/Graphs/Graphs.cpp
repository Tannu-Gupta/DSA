#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph{
    int V;
    list<int> *l;  //int *arr;  in Dynamic array
    
public:
     Graph(int V){
     this->V = V;
     l = new list<int> [V];
      // arr = new int[V];

     }
     
     void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
     }

        //Print the adjacency list
    //  void printAdjList(){
    //     for(int i=0; i<V; i++){
    //         cout << i << " : ";
    //         for(int neigh : l[i]){
    //             cout << neigh <<  " ";
    //         }

    //         cout << endl;
    //     }
    //  }

              //BFS Traversal

    //      void bfs(){     //TC: O(V + E)
    //         queue<int> Q;
    //         vector<bool> visited(V, false);

    //         Q.push(0);
    //         visited[0] = true;

    //         while(Q.size() > 0){
    //             int u = Q.front();
    //             Q.pop();
    //             cout << u << " ";

    //         for(int v : l[u]){   //v-> neighbour of u
    //             if(!visited[v]){
    //                 visited[v] = true;
    //                 Q.push(v);
    //             }
    //         }
    //     }

    //     cout << endl;

    //  }



    //       //DFS Traversal

    //  void dfsHelper(int u, vector<bool> &visited){   //TC: O(V + E)
    //     cout << u << " ";
    //     visited[u]  = true;
        
    //     for(int v : l[u]){
    //         if(!visited[v]) {
    //           dfsHelper(v, visited);
    //         }   
    //      }
    //  }

    //  void dfs(){
    //     int src = 0;
    //     vector<bool> visited(V, false);

    //     for(int i=0; i<V; i++){
    //         if(!visited[i]){
    //             dfsHelper(i, visited);
    //         }
    //     }

    //   //dfsHelper(src, visited);
    //     cout << endl;
    // }
   

           //DFS Cycle Detection in Undirected Graph     TC:O(V+E)

        //   bool isCycleUndirectedDFS(int src, int par, vector<bool> &visited){  //dfs algo
        //         visited[src] = true;
        //         list<int> neighbours = l[src];

        //         for(int v : neighbours){
        //             if(!visited[v]){
        //                 if(isCycleUndirectedDFS(v, src, visited)){
        //                     return true;
        //                 }
        //             }
        //             else if(v != par){
        //                 return true;
        //             }
        //         }

        //         return false;
        //   }

        //   bool isCycle(){
        //     vector<bool> visited(V, false);

        //     for(int i=0; i<V; i++){
        //         if(!visited[i]){
        //             if(isCycleUndirectedDFS(i, -1, visited)){
        //                 return true;
        //             }
        //         }
        //     }

        //     return false;

        //   }

                 //BFS Cycle Detection in Undirected Graph     TC:O(V+E)
                 
//                  bool isCycleUndirectedBFS(int src, vector<bool> &visited){  //bfs algo
//                     queue<pair<int, int>> Q;
//                     Q.push({src, -1});
//                     visited[src] = true;

//                     while(Q.size() > 0){
//                         int u = Q.front().first;
//                         int parU = Q.front().second;
//                         Q.pop();
                        
//                         list<int> neighbours = l[u];
//                         for(int v : neighbours){
//                             if(!visited[v]){
//                                 Q.push({v, u}); 
//                                 visited[v] = true;     //u--------------v
//                             } 
//                             else if(v != parU){
//                                 return true;
//                             }
//                         }
//                     }

//                     return false;
//                  }

//                  bool isCycle(){
//                     vector<bool> visited(V, false);

//                     for(int i=0; i<V; i++){
//                         if(!visited[i]){
//                             if(isCycleUndirectedBFS(i, visited)){
//                                 return true;
//                             }
//                         }
//                     }

//                     return false;
//                  }

             //DFS Cycle Detection in Directed Graph     TC:O(V+E)
    bool isCycleDirectedDFS(int curr, vector<bool> &visited, vector<bool> &recPath){
        visited[curr] = true;
        recPath[curr] = true;

        for(int v : l[curr]){
            if(!visited[v]){
                if(isCycleDirectedDFS(v, visited, recPath)){
                    return true;
                }
                
            } else if(recPath[v]){
                    return true;
                }
        }

        recPath[curr] = false;
        return false;

    }

    bool isCycle(){
        vector<bool> visited(V, false);
        vector<bool> recPath(V, false);

        for(int i=0; i<V; i++){
            if(!visited[i]){
                if(isCycleDirectedDFS(i, visited, recPath)){
                    return true;
                }
            }
        }
    return false;
    }
 };


int main(){
    Graph g(5);

    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(3, 4);

    
   // g.printAdjList();

//    cout << "BFS Traversal: ";
//    g.bfs();

//    cout << "DFS Traversal: ";
//    g.dfs();

cout << g.isCycle() << endl;

    return 0;
}