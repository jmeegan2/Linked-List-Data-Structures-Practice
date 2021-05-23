#include <iostream>
using namespace std;

struct Node
{
	int data;

	Node* next;

};

//only for the 1st Node
void initNode(struct Node* head, int n) {
	head->data = n;
	head->next = NULL;
}

//apending
void addNode(struct Node* head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node* cur = head;
		while (cur) {
			if (cur->next == NULL) {
				cur->next = newNode;
				return;
			}
			cur = cur->next;
		}
}
void insertFront(struct Node **head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = *head;
	*head = newNode;
}

struct Node* searchNode(struct Node* head, int n) {
	Node *cur = head;
	while (cur) {
		if (cur-> data == n) return cur;
		cur = cur->next;
	}
	cout << "No Node " << n << " in list.\n";

}

bool deleteNode(struct Node** head, Node* ptrDel) {
	Node* cur = *head;
	if (ptrDel == *head) {
		*head = cur->next;
		delete ptrDel;
		return true;
	}
	while (cur) {
		if (cur->next == ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}
/* reverse the list*/
struct Node* reve

