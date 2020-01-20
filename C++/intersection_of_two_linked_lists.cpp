/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL or headB == NULL) return NULL;
        
        ListNode* path_A = headA;
        ListNode* path_B = headB;
        
        while(path_A != path_B) {
            if(path_A == NULL) path_A = headB; 
            else path_A = path_A->next; 
            
            if(path_B == NULL) path_B = headA; 
            else path_B = path_B->next;
        }        
        return path_A;
    }
};
