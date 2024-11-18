#include <iostream>
using namespace std;

struct Node {
    public:
    int data;
    Node *next;
};
Node *head;

class LinkedList {
    public:
    void insertBack(int data) {
        Node *tempNode = new Node();
        tempNode->data = data;
        tempNode->next = nullptr;

        if(head == nullptr) {
            head = tempNode;
            return;
        }
        Node *tempHead = head;
        while(tempHead->next != nullptr) { // traversing to find the last node of the linkedList
            tempHead = tempHead->next;
        }
        tempHead->next = tempNode;
    }
    void printList() {
        while(head != nullptr) {
            cout << head->data << "\n";
            head = head->next;
        }
    }
};
int main() {
    head = NULL;
    LinkedList number;
    number.insertBack(1);
    number.insertBack(1);
    number.insertBack(2);
    number.insertBack(3);
    number.printList();

    return 0;
}