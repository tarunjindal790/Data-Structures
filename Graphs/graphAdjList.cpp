//Graph is vertex connected with each other.These connection are
//stored using adjacency list.

#include<iostream>
#include<list>

using namespace std;

class Graph{
	int V; //no. of vertices
	list<int> *adjList; //pointer to list of integers
public:
	Graph(int v){
		V=v;
		adjList=new list<int>[V]; //dynamic array of list of integers
	}

	void addEdge(int u,int v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}
	void printAdjList(){
		for(int i=0;i<V;i++){
			cout<<i<<"->";
			for(int node:adjList[i]){
				cout<<node<<",";
			}
		}
	}

};


int main(){
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(3,2);
	g.printAdjList();

	return 0;
}