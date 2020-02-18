/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){
    int val_list[100000] = {0};
    
    int i = 0;
    while(head){
        val_list[i] = head->val;
        head = head->next;
        i ++;
    }
    
    for(int j = 0, n = 0; j < i && n <= i/2; j++, n++){ 
        if(val_list[j] != val_list[i-1-n]) return false;
    }
    
    return true;
}
