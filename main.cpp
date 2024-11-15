#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node *Next;
    Node(int x) : Value(x), Next(nullptr) {}
};
class LinkedList {
    Node *head;
public:
    void Insert(int x) {
        Node *temp = new Node (x);
        temp->Next = head;
        head = temp;
    }
    void printList() {
        Node *n = head;
        while(n != NULL) {
            cout << n->Value << endl;
            n = n->Next;
        }
    }
};
int main() {
    LinkedList *head = new LinkedList ();
    head->Insert(1);
    head->Insert(2);
    head->Insert(3);
    head->Insert(4);
    head->Insert(5);
    head->printList();
    return 0;
}