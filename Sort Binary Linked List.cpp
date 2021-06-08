/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode *x = A, *y = A;
    
    while(x){
        if(y->val != 1)
            y = y->next;
        
        else if(y->val == 1 && x->val == 0){
            int a = x->val;
            x->val = y->val;
            y->val = a;
            y = y->next;
        }
        x = x->next;
    }
    return A;
}
