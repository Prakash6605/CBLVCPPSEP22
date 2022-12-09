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
    int length(ListNode* head){
        
        int l = 0 ;
        while(head){
            l++;
            head = head->next;
        }
        return l;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int la = length(headA);
        int lb = length(headB);
        
        ListNode* larger , *smaller ;
        
        if(la > lb){
            larger = headA;
            smaller = headB;
        }else{
            larger = headB;
            smaller = headA;
        }
        
        int diff = abs(la - lb);
        
        ListNode* p1 = larger;
        
        for(int i = 0 ; i < diff ; i++){
            p1 = p1->next;
        }
        
        cout << " p1 " << p1->val << endl;
        
        while(p1 && smaller && p1 != smaller){
            p1 = p1->next;
            smaller = smaller->next;
        }
        
        return p1;
        
        
        
    }
};