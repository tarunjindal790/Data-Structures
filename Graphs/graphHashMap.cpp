#include<iostream>
#include<map>
#include<list>
#include<cstring>
using namespace std;



template<typename T>
class Graph{
	map<T,list<T>> adjList;

	public:
	
	Graph(){};
	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir==true){
			adjList[v].push_back(u);
		}
	}

	void printAdjList(){
		for(auto row:adjList){
			T key=row.first;
			cout<<key<<"->";
			for(T elem:row.second){
				cout<<elem<<",";
			}
			cout<<endl;
		}
	}
	
	
};

int main(){
	Graph<string> g;
	g.addEdge("abc","de");
	g.addEdge("de","fg");
	g.addEdge("fg","abc");
	g.printAdjList();
	return 0;
}