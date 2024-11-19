#include <iostream>
using namespace std;

struct Node{
    int Data;
    Node *Next;
};
Node *head;
void Insert(int data) {
    Node *temporaryNode = new Node();
    temporaryNode->Data = data;
    temporaryNode->Next = NULL;

    if(head == NULL) {
        temporaryNode->Next = head;
        head = temporaryNode;
        return;
    }
    Node *temporaryHead = head;
    while(temporaryHead->Next != NULL) {
        temporaryHead = temporaryHead->Next;
    }
    temporaryHead->Next = temporaryNode;
}
void Del(int index) {
    Node *temporayHead = head;
    if(index == 0) {
        head = temporayHead->Next;
        delete temporayHead;
        return;
    }
    for(int i = 0; i < index - 1; i++){
        temporayHead = temporayHead->Next;
    }
    Node *temporaryNode = temporayHead->Next;
    temporayHead->Next = temporaryNode->Next;
    delete temporaryNode;
}
void printList() {
    while(head != NULL) {
        cout << head->Data << " ";
        head = head->Next;
    }
}
int main() {
    head = NULL;

    int number; cin >> number;
    while(number-- > 0) {
        int insert; cin >> insert;
        Insert(insert);
    }
    int del; cin >> del;
    Del(del);
    printList();
    return 0;
}
