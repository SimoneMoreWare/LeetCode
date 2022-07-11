class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if not head: return head #Empty.
        if not head.next: return head #We reached end.
        orig_head = self.reverseList(head.next) #Traverse to end, orig_head is now end node.
        head.next.next = head #Swap head with right node.
        head.next = None #So we don't wind up in infinite loop.
        return orig_head #Very last thing returned. End node!
