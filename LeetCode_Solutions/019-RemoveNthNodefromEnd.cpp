//Given the head of a linked list, remove the nth node from the end of the list and return its head.
 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == nullptr || n < 0) {
            return nullptr;
        }
        
        int len = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            len++;
            temp = temp->next;
        }
        
        if (len < n) {
            return nullptr;
        }
        
        if (len == n) {
            ListNode* newNode = head->next;
            delete head;
            return newNode;
        }
        
        temp = head;
        for (int i = 1; i < (len - n); ++i) {
            temp = temp->next;
        }
        
        ListNode* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
        
        return head;
    }
};
