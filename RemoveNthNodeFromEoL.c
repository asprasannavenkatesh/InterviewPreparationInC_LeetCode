// Remove Nth Node From End of Linked List

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    // We can try using a two pointer approach to solve this problem
    struct ListNode *current = head;
    struct ListNode *helper_node = head;
    
    int count = 0;

    // Move the helper_node pointer by n places
    while(count < n) {
        // Handle deletion of head case
        if(helper_node->next == NULL) {
            if(count == (n-1)) {
                head = head->next;
                return head;
            }
        }
        helper_node = helper_node->next;
        count++;
    }
    
    while(helper_node->next != NULL) {
        current = current->next;
        helper_node = helper_node->next;
    }
    
    current->next = current->next->next;
    
    return head;
}
