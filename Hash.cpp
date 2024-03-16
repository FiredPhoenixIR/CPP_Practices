//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Node {
//public:
//	string key;
//	int value;
//	Node* next;
//	Node(string key, int value) : key(key),value(value),next(nullptr){}
//};
//
//class HashTable {
//private:
//	static const int SIZE = 7;
//	Node* dataMap[SIZE];
//public:
//	void printTable() {
//		for (int i = 0; i < SIZE; i++) {
//			cout << i << " : "<< endl;
//			if (dataMap[i]) {
//				Node* temp = dataMap[i];
//				while (temp) {
//					cout << "key : " << temp->key << " , " << "value : " << temp->value << endl;
//					temp = temp->next;
//				}
//			}
//		}
//	}
//	
//	int hash(string key) {
//		int hash = 0;
//		int prime = 23;
//		for (int i = 0; i < key.length(); i++) {
//			int asciivalue = int(key[i]);
//			hash = (hash + asciivalue * prime) % SIZE;
//		}
//		return hash;
//	}
//
//	void set(string key, int value) {
//		Node* newnode = new Node(key, value);
//		int node_index = hash(key);
//		Node* temp = dataMap[node_index];
//		if (dataMap[node_index] == nullptr) {
//			dataMap[node_index] = newnode;
//		}
//		else {
//			while (temp->next) {
//				temp = temp->next;
//			}
//			temp->next = newnode;
//		}
//	}
//
//	bool get(string key) {
//		int node_index = hash(key);
//		Node* temp = dataMap[node_index];
//		int i = 0;
//		while (temp) {
//			if (temp->key == key) {
//				cout << endl << "[key : " << temp->key << " , Value :" << temp->value << "] is located in index : " << node_index << " element : " << i + 1 << endl;
//				return true;
//			}
//			else {
//				temp = temp->next;
//				i++;
//			}
//		}
//		//if (temp == nullptr || key != temp->value) {
//			cout << endl << key << " doesn't exist in datamap !" << endl;
//			return false;
//		//}
//
//	}
//
//	int getvalue(string key) {
//		int node_index = hash(key);
//		Node* temp = dataMap[node_index];
//		while (temp) {
//			if (temp->key == key) { 
//				cout << endl << key << " value is " << temp->value << endl;
//				return temp->value; 
//			}
//			temp = temp->next;
//		}
//		//cout << endl << key << " value is " << 0 << endl;
//		return 0;
//	}
//	vector<string> keys() {
//		vector<string> allkeys;
//		for (int i = 0;i < SIZE;i++) {
//			Node* temp = dataMap[i];
//			while (temp) {
//				allkeys.push_back(temp->key);
//				temp = temp->next;
//			}
//		}
//		return allkeys;
//	}
//};
//
//int main() {
//	HashTable* MyHashTable = new HashTable();
//	//MyHashTable->printTable();
//	MyHashTable->set("Mahdi", 1370);
//	MyHashTable->set("Aram", 1374);
//	MyHashTable->set("Mahi", 1378);
//	MyHashTable->set("Mobina", 1380);
//	MyHashTable->set("Toofan", 1371);
//	MyHashTable->set("Ayda", 1369);
//	MyHashTable->set("Mahdiii", 1370);
//	MyHashTable->set("Arammm", 1374);
//	MyHashTable->set("Mahiii", 1378);
//	MyHashTable->set("Mobinaaa", 1380);
//	MyHashTable->set("Toofannn", 1371);
//	MyHashTable->set("Aydaaa", 1369);
//	MyHashTable->printTable();
//
//	MyHashTable->get("Mahdi");
//	MyHashTable->get("Aram");
//	MyHashTable->get("mahdi");
//	MyHashTable->get("aram");
//	MyHashTable->getvalue("Mahdi");
//	vector<string> keys = MyHashTable->keys();
//	for (auto key : keys) {
//		cout << key << " ";
//	}
//}