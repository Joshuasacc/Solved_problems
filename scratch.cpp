#include <iostream>
using namespace std;

struct Node { // Access modifier niya ay public
    int data;
    Node *next;
};
Node *head; // set head to global

void InsertBack(int value) {
    Node *temporaryNode = new Node();
    temporaryNode->data = value;
    temporaryNode->next = NULL;

    if(head == NULL) {
        temporaryNode->next = head;
        head = temporaryNode;
        return;
    }
    Node *temporaryHead = head;
    while(temporaryHead->next != NULL) {
        temporaryHead = temporaryHead->next;
    }
    temporaryHead->next = temporaryNode;
}
void InsertAny(int value, int index) {
    // Set the value of node
    Node *temporaryNode = new Node;
    temporaryNode->data =value;
    temporaryNode->next = NULL;

    // Inserting the node in a specific index
    Node *temporaryHead = head;
    for(int i = 0; i < index - 1; i++) {
        temporaryHead = temporaryHead->next;
    }
    temporaryNode->next = temporaryHead->next;
    temporaryHead->next = temporaryNode;
}
void printList() {
    while(head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
}
int ListLength() {
    int length = 0;
    while(head != NULL) {
        head = head->next;
        length++;
    }
    return length;
}
void delLinkedList(int index) {
    Node *temporaryHead = head;
    for(int i = 0; i < index -1; i++) {
        temporaryHead = temporaryHead->next;
    }
    Node *tempNode = temporaryHead->next;
    temporaryHead->next = tempNode->next;
    delete tempNode;
}
void deleteFront() {
    Node *temporaryHead = head->next;
    head = temporaryHead;
    delete temporaryHead;
}
void deleteLast() {
   Node *tempHead = head;
   while(tempHead->next->next != NULL) {
        tempHead = tempHead->next;
   }
   delete tempHead->next;
   tempHead->next = NULL;
}
int main() {
    head = NULL;
    InsertBack(1);
    InsertBack(2);
    InsertBack(3);
    InsertBack(4);
    // InsertAny(11, 2);
    deleteLast();
    printList();
    return 0;
}