ListNode* oddEvenList(ListNode* head) {
    if (!head || !head->next)
        return head;
    
    ListNode* odd = head;
    ListNode* even = head->next;
    ListNode* evenHead = even;  // save the starting node of the even list
    
    while (odd->next && even) {
        odd->next = even->next;  // connect the odd list with the next odd node
        if (odd->next){
            even->next = odd->next->next;  // connect the even list with the next even node
            odd = odd->next;  // move the odd pointer to the next odd node
        }
        even = even->next;  // move the even pointer to the next even node
    }
    
    odd->next = evenHead;  // connect the end of the odd list with the starting node of the even list
    
    return head;
}
