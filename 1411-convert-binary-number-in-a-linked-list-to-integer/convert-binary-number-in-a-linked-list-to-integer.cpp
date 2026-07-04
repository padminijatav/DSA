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
    int getDecimalValue(ListNode* head) {
        vector<int> copy;
        ListNode* t=head;
        while(t!=nullptr){
            copy.push_back(t->val);
            t=t->next;
        }

        int i=copy.size()-1;
        int base=1;
        int ans=0;
        while(i>=0){
            ans+=(copy[i]*base);
            base=base*2;
            i--;
        }
        return ans;
    }
};