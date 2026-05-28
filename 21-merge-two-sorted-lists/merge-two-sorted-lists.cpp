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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res=new ListNode(0);
        ListNode* h=res;

        ListNode* h1=list1;
        ListNode* h2=list2;
        if(h1==nullptr){
            return h2;
        }else if(h2==nullptr){
            return h1;
        }
        
        while( (h1!=nullptr ) && (h2!=nullptr)){
            if(h1->val <=h2->val){
                h->next=h1;
                h1=h1->next;
            }else{
                h->next=h2;
                h2=h2->next;
            }
            h=h->next;
        }
        while(h1!=nullptr ){
            h->next=h1;
            h1=h1->next;
            h=h->next;

        }
        while(h2!=nullptr ){
            h->next=h2;
            h2=h2->next;
            h=h->next;

        }
        return res->next;
    }
};