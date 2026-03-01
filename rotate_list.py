class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def rotateRight(head: ListNode, k: int) -> ListNode:
    if not head or not head.next or k == 0:
        return head
    
    # 1. Find the length of the list and the tail node
    length = 1
    tail = head
    while tail.next:
        tail = tail.next
        length += 1
        
    # 2. Compute effective rotations
    k = k % length
    if k == 0:
        return head
        
    # 3. Make the linked list circular
    tail.next = head
    
    # 4. Find the new tail which is at position (length - k)
    steps_to_new_tail = length - k
    new_tail = head
    for _ in range(1, steps_to_new_tail):
        new_tail = new_tail.next
        
    # 5. The new head is the next node after the new tail
    new_head = new_tail.next
    
    # 6. Break the loop to return to a singly-linked list
    new_tail.next = None
    
    return new_head

def print_list(head: ListNode):
    current = head
    while current:
        print(f"{current.val} -> ", end="")
        current = current.next
    print("None")

if __name__ == "__main__":
    # Create test list: 1 -> 2 -> 3 -> 4 -> 5 -> None
    head = ListNode(1)
    head.next = ListNode(2)
    head.next.next = ListNode(3)
    head.next.next.next = ListNode(4)
    head.next.next.next.next = ListNode(5)
    
    print("Original list: ", end="")
    print_list(head)
    
    k = 2
    print(f"Rotating right by {k} places...")
    
    head = rotateRight(head, k)
    
    print("List after rotation: ", end="")
    print_list(head)
