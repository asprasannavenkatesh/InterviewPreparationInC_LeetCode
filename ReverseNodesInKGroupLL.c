/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseKGroup(struct ListNode* head, int k){
    struct ListNode *current = head;
    struct ListNode *previous = NULL;
    struct ListNode *next = NULL;
    int count = 0;
    
    // Check whether there are k elements to be reversed, if not don't reverse the elements
    while((current != NULL) && (count < k)) {
        count++;
        current = current->next;
    }
    
    current = head;
    
    if(count == k) {
        while((current != NULL) && (count > 0)) {
            next = current->next;      // Store the next pointer
            current->next = previous;  // Reverse the nodes
            previous = current;        // Move on to the remaining nodes
            current = next;
            count--;
        }
    } else {
        return current;
    }
    
    // Then call this function reverseKGroup recursively
    if(next != NULL) {
        head->next = reverseKGroup(next, k);
    }

    return previous;
}
