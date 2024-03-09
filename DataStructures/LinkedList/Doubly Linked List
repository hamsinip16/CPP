//Doubly linked list - traversing can happen in both directions as each node consists of address of both next element and previous element of a linked list.

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev; // Pointer to the previous node
    
    Node(int var) : data(var), next(nullptr), prev(nullptr) {}
};

class LinkedList {
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    
    void insertatHead(int var);
    void insertatPos(int var, int pos);
    void insertatEnd(int var);
    
    void deleteatHead();
    void deleteatPos(int pos);
    void deleteatEnd();
    
    void traverseForward();
    void traverseBackward();
};

void LinkedList::traverseForward() {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Empty list" << endl;
        return;
    }
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void LinkedList::traverseBackward() {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "Empty list" << endl;
        return;
    }
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void LinkedList::insertatHead(int var) {
    Node* newNode = new Node(var);
    if (head != nullptr) {
        head->prev = newNode;
    }
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertatPos(int var, int pos) {
    if (pos == 1) {
        insertatHead(var);
        return;
    }
    Node* newNode = new Node(var);
    Node* temp = head;
    int count = 1;
    while (count < (pos - 1) && temp != nullptr) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }
    newNode->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void LinkedList::insertatEnd(int var) {
    Node* newNode = new Node(var);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void LinkedList::deleteatHead() {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
}

void LinkedList::deleteatPos(int pos) {
    if (pos == 1) {
        deleteatHead();
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count < pos && temp != nullptr) {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }
    temp->prev->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void LinkedList::deleteatEnd() {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }
    if (head->next == nullptr) {
        deleteatHead();
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
}

int main() {
    LinkedList list;
    cout << "Insert :" << endl;
    list.insertatHead(6);
    list.traverseForward();
    list.insertatEnd(5);
    list.traverseForward();
    list.insertatEnd(4);
    list.traverseForward();
    list.insertatHead(7);
    list.traverseForward();
    list.insertatPos(9, 3);
    list.traverseForward();
    
    cout << "Forward traversal:" << endl;
    list.traverseForward();
    
    cout << "Backward traversal:" << endl;
    list.traverseBackward();
    
    cout << "Delete at Head:" << endl;
    list.deleteatHead();
    list.traverseForward();
    
    cout << "Delete at Pos:" << endl;
    list.deleteatPos(2);
    list.traverseForward();
    
    cout << "Delete at End:" << endl;
    list.deleteatEnd();
    list.traverseForward();
    
    return 0;
}


/*
Insert :
6 
6 5 
6 5 4 
7 6 5 4 
7 6 9 5 4 
Forward traversal:
7 6 9 5 4 
Backward traversal:
4 5 9 6 7 
Delete at Head:
6 9 5 4 
Delete at Pos:
6 5 4 
Delete at End:
6 5 
*/
