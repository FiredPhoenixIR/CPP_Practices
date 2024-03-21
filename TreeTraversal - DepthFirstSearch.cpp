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
//void DFSPreOrder(Node* currentnode) {
//	cout << currentnode->value;
//	if (currentnode->left) {
//		DFSPreOrder(currentnode->left);
//	}
//	if(currentnode->right) {
//		DFSPreOrder(currentnode->right);
//	}
//}
//
//void DFSPreOrder() { //overload so it can access root with no arg
//	DFSPreOrder(root);
//}
//
//void DFSPostOrder(Node* currentnode) {
//	if (currentnode->left) {
//		DFSPostOrder(currentnode->left);
//	}
//	if (currentnode->right) {
//		DFSPostOrder(currentnode->right);
//	}
//	cout << currentnode->value;
//}
//
//void DFSPostOrder() { //overload so it can access root with no arg
//	DFSPostOrder(root);
//}
//
//void DFSInOrder(Node* currentnode) { // numerical order
//	if (currentnode->left) {
//		DFSPostOrder(currentnode->left);
//	}
//	cout << currentnode->value;
//	if (currentnode->right) {
//		DFSPostOrder(currentnode->right);
//	}
//}
//
//void DFSInOrder() { //overload so it can access root with no arg
//	DFSInOrder(root);
//}