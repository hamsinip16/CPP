/* Bubble sort on Doubly Linked List */

#include <algorithm>
#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;
};

// Function to push a new element one after the other
void pushData(Node** head_ref, int new_data)
{
	// Allocate node memory and data
	Node* new_node = new Node();
	new_node->data = new_data;

	// Make next of new node as head and previous as NULL for 1st data
	new_node->next = (*head_ref);
	new_node->prev = NULL;

	// Change prev of head node to the new node
	if ((*head_ref) != NULL){
		(*head_ref)->prev = new_node;
	}
	// Move the head to point to the new node
	(*head_ref) = new_node;
}

void printList(Node* node)
{
	Node* last;
    cout << "ascending order -" <<endl;
	while (node != NULL) {
		cout << " " << node->data << " ";
		last = node;
		node = node->next;
	}
    cout << "\ndescending order -" <<endl;
	while (last != NULL) {
		cout << " " << last->data << " ";
		last = last->prev;
	}
}

void bubbleSort(struct Node *start)
{
    int swapped, i;
    struct Node *ptr1;
    struct Node *ptr2 = NULL;
    if (start == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = start;
        while (ptr1->next != ptr2)
        {
            if (ptr1->data > ptr1->next->data)
            {
                swap(ptr1->data, ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        ptr2 = ptr1;
    }
    while (swapped);
}

int main()
{
    //starting with an empty list
	Node* head = NULL;
	pushData(&head, 115);
	pushData(&head, 62);
	pushData(&head, 11);
	pushData(&head, 1);
	cout << "Doubly linked list" << endl;
	printList(head);
	bubbleSort(head);
	cout << "\nBubble sort in Doubly linked list" << endl;
	printList(head);

	return 0;
}
