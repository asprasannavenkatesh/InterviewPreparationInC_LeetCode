/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode *current = head;
    struct ListNode *previous = NULL;
    struct ListNode *next = NULL;
    int count = 2;
    
    while((current != NULL) && (count > 0)) {
        next = current->next;     // save the next pointer
        current->next = previous; // Do the swap
        previous = current;       // Move on to the other nodes
        current = next;
        count--;
    }
    if(next != NULL) {
        head->next = swapPairs(next);
    }
    
    return previous;

}
