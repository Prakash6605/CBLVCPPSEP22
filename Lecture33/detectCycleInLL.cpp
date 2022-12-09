bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        // ListNode* fast = head->next;
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode* fast = head->next;
        while(slow && fast){
                
            if(slow == fast){
                return true;
            }
            
            slow = slow->next;
            
            if(fast->next && fast->next->next){
                fast = fast->next->next;
            }else{
                fast = NULL;
            }
        }
        
        return false;
}