//#include<iostream>
//#include <memory>
//
// // O(logn)
// 
//class Node; //Forward Declare
//// Define a type alias for shared pointer to Node
//using NodePtr = std::shared_ptr<Node>;
//
//class Node {
//public:
//	int value;
//	Node* left;
//	Node* right;
//
//	Node(int x) {
//		value = x;
//		left = nullptr;
//		right = nullptr;
//	}
//};
//
//class BinarySearchTree {
//private:
//	//Node* root;
//public:
//	Node* root;
//	//NodePtr root; better
//	BinarySearchTree() : root(nullptr) {};
//
//	bool insert(int val) {
//		Node* newnode = new Node(val);
//		// Better : NodePtr newnode = std::make_shared<Node>(val);
//		if (root == nullptr) {
//			root = newnode;
//			return true;
//		}
//		else {
//			Node* temp = root;
//			while (true) {
//				if (val == temp->value) { delete newnode; return false; }
//				if (val < temp->value) {
//					if (temp->left == nullptr) {
//						temp->left = newnode;
//						return true;
//					}
//					temp = temp->left;
//				}
//				else if (val > temp->value) {
//					if (temp->right == nullptr) {
//						temp->right = newnode;
//						return true;
//					}
//					temp = temp->right;
//				}
//			}
//		}
//	}
//
//	bool Contains(int val) {
//		//if (root == nullptr) { return false; } not needed 
//		Node* temp = root;
//		while (temp) {
//			if (temp->value == val) { return true; }
//			else if (val < temp->value) {
//				temp = temp->left;
//			}
//			else if (val > temp->value) {
//				temp = temp->right;
//			}
//		}
//		return false;
//	}
//};
//
//int main() {
//	auto obj1 = std::make_unique<BinarySearchTree>();
//	//std::unique_ptr<BinarySearchTree> : auto
//	obj1->insert(2);
//	obj1->insert(3);
//	obj1->insert(1);
//	std::cout << obj1->Contains(3) << std::endl;
//	std::cout << obj1->Contains(4);
//}