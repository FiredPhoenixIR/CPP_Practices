//#include <iostream>
//using namespace std;
//
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
//Node* insert(Node* node, int key) {
//    // Perform standard BST insertion
//    if (node == nullptr)
//        return newNode(key);
//
//    if (key < node->key)
//        node->left = insert(node->left, key);
//    else if (key > node->key)
//        node->right = insert(node->right, key);
//    else // Equal keys are not allowed in AVL
//        return node;
//
//    // Update height of this ancestor node
//    node->height = 1 + max(height(node->left), height(node->right));
//
//    // Get the balance factor to check whether this node became unbalanced
//    int balance = getBalance(node);
//
//    // If this node becomes unbalanced, there are 4 cases
//
//    // Left Left Case
//    if (balance > 1 && key < node->left->key)
//        return rightRotate(node);
//
//    // Right Right Case
//    if (balance < -1 && key > node->right->key)
//        return leftRotate(node);
//
//    // Left Right Case
//    if (balance > 1 && key > node->left->key) {
//        node->left = leftRotate(node->left);
//        return rightRotate(node);
//    }
//
//    // Right Left Case
//    if (balance < -1 && key < node->right->key) {
//        node->right = rightRotate(node->right);
//        return leftRotate(node);
//    }
//
//    // If the tree is balanced, return the unchanged node
//    return node;
//}
//
//// Function to delete a key from the AVL tree
//Node* deleteNode(Node* root, int key) {
//    // Perform standard BST delete
//    if (root == nullptr)
//        return root;
//
//    if (key < root->key)
//        root->left = deleteNode(root->left, key);
//    else if (key > root->key)
//        root->right = deleteNode(root->right, key);
//    else {
//        // Node with only one child or no child
//        if (root->left == nullptr || root->right == nullptr) {
//            Node* temp = root->left ? root->left : root->right;
//
//            // No child case
//            if (temp == nullptr) {
//                temp = root;
//                root = nullptr;
//            }
//            else // One child case
//                *root = *temp; // Copy the contents of the non-empty child
//
//            delete temp;
//        }
//        else {
//            // Node with two children: Get the inorder successor (smallest
//            // in the right subtree)
//            Node* temp = root->right;
//            while (temp->left != nullptr)
//                temp = temp->left;
//
//            // Copy the inorder successor's data to this node
//            root->key = temp->key;
//
//            // Delete the inorder successor
//            root->right = deleteNode(root->right, temp->key);
//        }
//    }
//
//    // If the tree had only one node then return
//    if (root == nullptr)
//        return root;
//
//    // Update height of the current node
//    root->height = 1 + max(height(root->left), height(root->right));
//
//    // Get the balance factor of this node to check whether it became unbalanced
//    int balance = getBalance(root);
//
//    // If this node becomes unbalanced, there are 4 cases
//
//    // Left Left Case
//    if (balance > 1 && getBalance(root->left) >= 0)
//        return rightRotate(root);
//
//    // Left Right Case
//    if (balance > 1 && getBalance(root->left) < 0) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//
//    // Right Right Case
//    if (balance < -1 && getBalance(root->right) <= 0)
//        return leftRotate(root);
//
//    // Right Left Case
//    if (balance < -1 && getBalance(root->right) > 0) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//
//    return root;
//}
//
//// Function to print inorder traversal of the AVL tree
//void inorder(Node* root) {
//    if (root != nullptr) {
//        inorder(root->left);
//        cout << root->key << " ";
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
//    cout << "Inorder traversal of the AVL tree: ";
//    inorder(root);
//    cout << endl;
//
//    // Deleting elements
//    root = deleteNode(root, 20);
//    root = deleteNode(root, 30);
//
//    cout << "Inorder traversal of the AVL tree after deletion: ";
//    inorder(root);
//    cout << endl;
//
//    return 0;
//}
