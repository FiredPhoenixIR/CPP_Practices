//#include <iostream>
//
//// Define the structure of a node
//struct Node {
//    int data;   // Data stored in the node
//    Node* next; // Pointer to the next node in the list
//
//    // Constructor to initialize the node with given data and null next pointer
//    Node(int value) : data(value), next(nullptr) {}
//};
//
//// Define the linked list class
//class LinkedList {
//private:
//    Node* head; // Pointer to the head of the list
//
//public:
//    // Constructor to initialize the list with a null head pointer
//    LinkedList() : head(nullptr) {}
//
//    // Destructor to release memory allocated for all nodes in the list
//    ~LinkedList() {
//        Node* current = head;
//        while (current != nullptr) {
//            Node* temp = current;
//            current = current->next;
//            delete temp;
//        }
//    }
//
//    // Function to insert a new node at the beginning of the list
//    void insert(int value) {
//        // Create a new node with the given value
//        Node* newNode = new Node(value);
//
//        // Make the new node point to the current head
//        newNode->next = head;
//
//        // Update the head to point to the new node
//        head = newNode;
//    }
//
//    // Function to display the elements of the list
//    void display() {
//        Node* current = head;
//        while (current != nullptr) {
//            std::cout << current->data << " "; // Print the data of the current node
//            current = current->next;           // Move to the next node
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    // Create a linked list object
//    LinkedList list;
//
//    // Insert elements into the list
//    list.insert(1);
//    list.insert(2);
//    list.insert(3);
//
//    // Display the elements of the list
//    std::cout << "Linked List: ";
//    list.display();
//
//    return 0;
//}
