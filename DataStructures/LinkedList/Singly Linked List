/* 				Singly Linked List
The size of an array can not be increased once declared, but since Linked List memory are created dynamically and 
they need not be in a contiguous format as they are connected with pointers.

insertion - start, position, end
deletion - start, position, end
*/

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int var) : data(var), next(nullptr){}
};

class LinkedList{
    Node* head;
    public:
    LinkedList() : head(nullptr){}
    
    void insertatHead(int var);
    void insertatPos(int var, int pos);
    void insertatEnd(int var);
    
    void deleteatHead();
    void deleteatPos(int pos);
    void deleteatEnd();
    
    void traversePrint();

    //find Nth node from the en
    void Nthnode(int N);
};

void LinkedList :: traversePrint(){ //(Node* head){
    
    Node* temp = head;
    
    if(head == NULL){
        cout << "empty list" << endl;
        return;
    }
    while(temp != NULL){
        cout << temp->data << " " ;
        temp = temp->next;
    }
    
    cout << endl;
}

void LinkedList :: insertatHead(int var){
    
    Node* newNode = new Node(var);
    
    if(head == NULL){        
        newNode->next = NULL;    
    }
    else
        newNode->next = head;
        head = newNode;
}

void LinkedList :: insertatPos(int var, int pos){
    if((pos == 1) || (head == NULL)){
        insertatHead(var);
        return;
    }
    
    Node* newNode = new Node(var);
    Node* prev = head;
    int count = 1;
    
    while(count < (pos - 1)){
        prev = prev->next;
        count ++;
    }
    
    newNode->next = prev->next;
    prev->next = newNode;
}
 
void LinkedList :: insertatEnd(int var){
    if(head == NULL){
        insertatHead(var);
        return;
    }
    
    Node* newNode = new Node(var);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList :: deleteatHead(){
    if(head == NULL){
        cout << "empty list" << endl;
        return;
    }
    
    Node* temp = head;
    head = head->next;
    delete(temp);
}

void LinkedList :: deleteatPos(int pos){
    if(head == NULL){
        cout << "empty list" << endl;
        return;
    }
    
    Node* temp =  head;
    int count = 1;
    while(count < (pos - 1)){
        temp = temp->next;
        count ++;
    }
    Node* posNode = temp->next;
    temp->next = temp->next->next;
    delete(posNode);
}

void LinkedList :: deleteatEnd(){
    if(head == NULL){
        cout << "empty list" << endl;
        return;
    }
    
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    
    Node* lastNode = temp->next;
    temp->next = NULL;
    delete(lastNode);
}

        //Find Nth node from the end of the linked list
void LinkedList :: Nthnode(int N){
    if(head == NULL || N <= 0){
        return;
    }
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len ++;
        temp = temp->next;
    }
    if(len < N){
        return;
    }
    for(int i = 1; i < len - N - 1; ++i){    
        temp = temp->next;
    }
    cout << temp->data << endl;
}

int main(){
    LinkedList list;

    cout << "insert" << endl;

    list.insertatHead(6);    
    list.traversePrint();

    list.insertatEnd(5);
    list.traversePrint();

    list.insertatEnd(4);
    list.traversePrint();

    list.insertatHead(7);
    list.traversePrint();

    list.insertatPos(9, 3);
    list.traversePrint();

    cout << "delete" << endl;

    list.deleteatHead();
    list.traversePrint();

    list.deleteatPos(2);
    list.traversePrint();

    list.deleteatEnd();
    list.traversePrint();

    list.Nthnode(2);
    return 0;
}

/* OUTPUT
creating a list
insert
6 
6 5 
6 5 4 
7 6 5 4 
7 6 9 5 4 
delete
6 9 5 4 
6 5 4 
6 5
6
*/
