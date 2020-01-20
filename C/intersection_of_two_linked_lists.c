/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* path_A = headA;
    struct ListNode* path_B = headB;
        
    while(path_A != path_B) {
        if(!path_A) path_A = headB; 
        else path_A = path_A->next; 
            
        if(!path_B) path_B = headA; 
        else path_B = path_B->next;
    }        
    return path_A;
}
