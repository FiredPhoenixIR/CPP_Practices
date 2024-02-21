#include<iostream>
#include<fstream>
#include<string>
using namespace std;
/*

These classes are derived directly or indirectly from the classes 
istream and ostream. 
We have already used objects whose types were these classes: 
cin is an object of class istream and 
cout is an object of class ostream.

using namespace std;

// Three new data types are defined in fstream:
// ofstream: Output file stream that creates and writes information to files.
// ifstream : Input file stream that reads information from files.
// fstream : General file stream, with both ofstream and ifstream 
// capabilities that allow it to create, read, and write information to files.

int main() {
	ofstream MyFile("test.txt");
	ofstream outfile;
	outfile.open("file.dat", ios::out | ios::trunc);
	// MyFile.open("test.txt");
	// if file does not exist, the open function will create it automatically.
	if (MyFile.is_open()) {
		MyFile << "This is awesome! \n";
	}
	else {
		cout << "Something went wrong";
	}
	string line;
	ifstream File2("test2.txt");
	while ( std::getline(File2, line)) {
		cout << line << '\n';
	}
	MyFile.close();
	outfile.close();
}
*/