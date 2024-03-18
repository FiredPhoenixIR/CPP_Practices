//#include<iostream>
//#include<unordered_map>
//#include<unordered_set>
//using namespace std;
//
//// Unordered Map : key - value
//// Unordered Set : key only - no duplicate - O(1) for lookup insert delete
//// Space complexity :
//// Matrix : O(|V|^2) , Adjacency List : O(|V|+|E|) -- V : verticies, E : Edges
//// To Add Vertex, Matirx O(|V|^2) rebuilding whole matrix, List O(1)
//// To Add Edge both O(1)
//// Remove Edge O(1)
//// Remove Vertex , Matrix : O(|V|^2) rebuilding whole matrix , Adjacency List : O(|V|)
//
//class Graph {
//private:
//	unordered_map<string, unordered_set<string> > adjList;
//public:
//	bool addVertex(string vertex) {
//		if (adjList.count(vertex) == 0) {
//			adjList[vertex]; // add to unordered map
//			return true;
//		}
//		return false;
//	}
//
//	void printGraph() {
//		for (auto [vertex, edges] : adjList) {
//			cout << vertex << " : [";
//			for (auto edge : edges) {
//				cout << edge << " , ";
//			}
//			cout << " ]" << endl;
//		}
//	}
//
//	bool addEdge(string vertex1, string vertex2) {
//		if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
//			adjList.at(vertex1).insert(vertex2);
//			adjList.at(vertex2).insert(vertex1);
//			return true;
//		}
//		return false;
//	}
//
//	bool removeEdge(string vertex1, string vertex2) {
//		if (adjList.contains(vertex1) && adjList.contains(vertex2)) {
//			adjList.at(vertex1).erase(vertex2);
//			adjList.at(vertex2).erase(vertex1);
//			return true;
//		}
//		return false;
//	}
//
//	//void removeVertex(string vert) {
//	//	adjList.erase(vert);
//	//	for (auto [vertex, edges] : adjList) {
//	//		for (auto edge : edges) {
//	//			if (edge == vert) {
//	//				adjList.at(vertex).erase(edge);
//	//			}
//	//		}
//	//	}
//	//}
//
//	// for bi directioanl
//	bool removeVertex(string const& vertex) {
//		if (adjList.count(vertex) == 0) {
//			return false;
//		}
//		for (auto &othervert : adjList.at(vertex)) {
//			adjList.at(othervert).erase(vertex);
//		}
//		adjList.erase(vertex);
//		return true;
//	}
//};
//
//int main() {
//	Graph* obj = new Graph();
//	obj->addVertex("Mahdi");
//	obj->addVertex("Aram");
//	obj->addVertex("Mahi");
//	obj->addVertex("Toofan");
//	obj->addVertex("Mobina");
//	obj->addEdge("Mahdi", "Aram");
//	obj->addEdge("Mahi", "Toofan");
//	obj->addEdge("Mahi", "Mobina");
//	obj->printGraph();
//	cout << endl;
//	obj->removeEdge("Mahdi", "Aram");
//	obj->printGraph();
//	cout << endl;
//	obj->removeVertex("Mobina");
//	obj->printGraph();
//}