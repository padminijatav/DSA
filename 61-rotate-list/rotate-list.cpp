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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head==nullptr) return head;
        queue<int> q;
        ListNode* temp=head;
        while(temp!=nullptr){
            q.push(temp->val);
            temp=temp->next;
        }
        int n=q.size();
        k=k%n;
        int i=0;
        while(i<n-k){
            int d=q.front();
            q.pop();
            q.push(d);
            i++;
        }
        temp=head;
        while(temp!=nullptr){
            int d=q.front();
            q.pop();
            temp->val=d;
            temp=temp->next;
        }
        return head;
    }
};