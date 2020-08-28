// Remove Duplicates from Sorted Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    // Empty list
    if(head == NULL) {
        return NULL;
    }
    
    // Only one element in the list
    if(head->next == NULL) {
        return head;
    }
    
    // Compare the adjacent nodes for their values
    if(head->val == head->next->val) {
        // Remove the duplicate node
        struct ListNode *temp = head->next;
        head->next = head->next->next;
        free(temp);
        
        // Call rescursively for the list
        return deleteDuplicates(head);
    } else {
        head->next = deleteDuplicates(head->next);
        return head;
    }
}
