#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* next;
	Node* prev;
};

class DoubleLinkedlist {
private:
	Node* START;
public:
	DoubleLinkedlist();
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool listEmpty();
	void traverse();
	void revTraverse();
	void hapus();
	void searchData();
};

DoubleLinkedlist::DoubleLinkedlist() {
	START = NULL;
}

void DoubleLinkedlist ::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the student : ";
		cin >> nim;
		cout << "\nEnter the name of the student: ";
		cin >> nm;
		Node* newNode = new Node(); //step 1
		newNode->noMhs = nim; //step2
		newNode->name = nim; // step 3

	