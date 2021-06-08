int Solution::lPalin(ListNode* A) {
    
    ListNode *tmp = A;
    stack<int> s;
    
    while(tmp){
        s.push(tmp->val);
        tmp = tmp->next;
    }
    
    tmp = A;
    
    while(tmp){
        if(s.top() != tmp->val)
        return 0;
        
        tmp = tmp->next;
        s.pop();
    }
    
    return 1;
}
