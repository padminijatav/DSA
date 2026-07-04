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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int count =0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }

        ListNode* temp1=head;
        int a=1;
        while(a<k ){
            temp1=temp1->next;
            a++;
        }
        ListNode* temp2= head;
        int b=1;
        while(b<count-k+1){
            temp2=temp2->next;
            b++;
        }
        swap(temp1->val,temp2->val);
    
        return head;

    }
};