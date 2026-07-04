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
    int pairSum(ListNode* head) {
        vector<int> copy;
        ListNode* t=head;
        while(t!=nullptr){
            copy.push_back(t->val);
            t=t->next;
        }
        int i=0,j=copy.size()-1;
        int sum=0;
        int ans=0;
        while(i<j){
            sum=copy[i]+copy[j];
            ans=max(ans,sum);
            i++,j--;
        }
        return ans;
    }
};