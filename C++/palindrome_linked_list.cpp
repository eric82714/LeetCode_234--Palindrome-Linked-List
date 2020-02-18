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
    bool isPalindrome(ListNode* head) {
        vector<int> val_list;
        vector<int> val_list_reverse;
          
        while(head != NULL) {
            val_list.push_back(head->val);
            head = head->next;
        }
        
        val_list_reverse.resize(val_list.size());        
        reverse_copy(val_list.begin(), val_list.end(), val_list_reverse.begin());
        
        return val_list == val_list_reverse;
    }
};
