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
    int getcount(ListNode *head){
        int count=0;
        if(head==nullptr) return 0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=getcount(headA);
        int len2=getcount(headB);
        while(len1>len2){
            len1--;
            headA=headA->next;
        }
        while(len1<len2){
            len2--;
            headB=headB->next;
        }

        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};