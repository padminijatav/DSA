/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> c;
        ListNode* t=head;
        while(t!=nullptr){
            c.push_back(t->val);
            t=t->next;
        }
        int i=0;
        int j=c.size()-1;
        while(i<j){
            if(c[i]!=c[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};