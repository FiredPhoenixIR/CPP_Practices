//#include <iostream>
//
// // O(logn)
//// Node structure for the AVL tree
//struct Node {
//    int key;
//    int height;
//    Node* left;
//    Node* right;
//};
//
//// Function to create a new node with a given key
//Node* newNode(int key) {
//    Node* node = new Node();
//    node->key = key;
//    node->left = nullptr;
//    node->right = nullptr;
//    node->height = 1;
//    return node;
//}
//
//// Function to get the height of a node
//int height(Node* node) {
//    if (node == nullptr)
//        return 0;
//    return node->height;
//}
//
//// Function to get the maximum of two integers
//int max(int a, int b) {
//    return (a > b) ? a : b;
//}
//
//// Function to perform a right rotation
//Node* rightRotate(Node* y) {
//    Node* x = y->left;
//    Node* T2 = x->right;
//
//    // Perform rotation
//    x->right = y;
//    y->left = T2;
//
//    // Update heights
//    y->height = max(height(y->left), height(y->right)) + 1;
//    x->height = max(height(x->left), height(x->right)) + 1;
//
//    // Return new root
//    return x;
//}
//
//// Function to perform a left rotation
//Node* leftRotate(Node* x) {
//    Node* y = x->right;
//    Node* T2 = y->left;
//
//    // Perform rotation
//    y->left = x;
//    x->right = T2;
//
//    // Update heights
//    x->height = max(height(x->left), height(x->right)) + 1;
//    y->height = max(height(y->left), height(y->right)) + 1;
//
//    // Return new root
//    return y;
//}
//
//// Get the balance factor of a node
//int getBalance(Node* node) {
//    if (node == nullptr)
//        return 0;
//    return height(node->left) - height(node->right);
//}
//
//// Function to insert a key into the AVL tree
//Node* insert(Node* root, int key) {
//    // Perform standard BST insertion
//    if (root == nullptr)
//        return newNode(key);
//
//    Node* curr = root;
//    Node* parent = nullptr;
//
//    while (curr != nullptr) {
//        parent = curr;
//        if (key < curr->key)
//            curr = curr->left;
//        else if (key > curr->key)
//            curr = curr->right;
//        else // Equal keys are not allowed in AVL
//            return root;
//    }
//
//    if (key < parent->key)
//        parent->left = newNode(key);
//    else
//        parent->right = newNode(key);
//
//    // Update height of the current node
//    parent->height = 1 + max(height(parent->left), height(parent->right));
//
//    // Get the balance factor of this node to check whether it became unbalanced
//    int balance = getBalance(parent);
//
//    // If this node becomes unbalanced, there are 4 cases
//
//    // Left Left Case
//    if (balance > 1 && key < parent->left->key)
//        return rightRotate(parent);
//
//    // Right Right Case
//    if (balance < -1 && key > parent->right->key)
//        return leftRotate(parent);
//
//    // Left Right Case
//    if (balance > 1 && key > parent->left->key) {
//        parent->left = leftRotate(parent->left);
//        return rightRotate(parent);
//    }
//
//    // Right Left Case
//    if (balance < -1 && key < parent->right->key) {
//        parent->right = rightRotate(parent->right);
//        return leftRotate(parent);
//    }
//
//    return root;
//}
//
//// Function to print inorder traversal of the AVL tree
//void inorder(Node* root) {
//    if (root != nullptr) {
//        inorder(root->left);
//        std::cout << root->key << " ";
//        inorder(root->right);
//    }
//}
//
//// Driver program to test above functions
//int main() {
//    Node* root = nullptr;
//
//    // Inserting elements
//    root = insert(root, 10);
//    root = insert(root, 20);
//    root = insert(root, 30);
//    root = insert(root, 40);
//    root = insert(root, 50);
//    root = insert(root, 25);
//
//    std::cout << "Inorder traversal of the AVL tree: ";
//    inorder(root);
//    std::cout << std::endl;
//
//    return 0;
//}
