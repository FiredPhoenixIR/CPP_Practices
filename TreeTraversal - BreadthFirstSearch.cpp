//#include<iostream>
//#include <queue>
//using namespace std;
//
//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//};
//// Member function for binary search tree
//
//void BFS() { // Breadth First Search
//	std::queue<Node*> myQueue;
//	myQueue.push(root);
//	while (myQueue.size() > 0) {
//		Node* currentNode = myQueue.front();
//		myQueue.pop();
//		cout << currentNode->value << " ";
//		if (currentNode->left) {
//			myQueue.push(currentNode->left);
//		}
//		if (currentNode->right) {
//			myQueue.push(currentNode->right);
//		}
//	}
//}