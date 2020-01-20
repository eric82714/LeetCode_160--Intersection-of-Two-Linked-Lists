# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        hashmap = {}
        
        while headA:
            hashmap[headA] = headA.val
            headA = headA.next
            
        while headB:
            if headB in hashmap: return headB
            headB = headB.next
            
        return None
