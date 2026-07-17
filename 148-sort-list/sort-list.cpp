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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr) return nullptr;
        vector<int> samp;
        ListNode* temp=head;
        while(temp!=nullptr){
            samp.push_back(temp->val);
            temp=temp->next;
        }
        sort(samp.begin(),samp.end());
        temp=head;
        for(int i=0;i<samp.size();i++){
            temp->val=samp[i];
            temp=temp->next;
        }
        return head;
    }
};