/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map<Node*,Node*>m;
        Node* newhead=new Node(head->val);

        Node* oldtemp=head->next;
        Node* newtemp=newhead;

        m[head]=newhead;

        while(oldtemp!=nullptr){
            Node* newnode=new Node(oldtemp->val);

            m[oldtemp]=newnode;
            newtemp->next=newnode;

            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        oldtemp=head;newtemp=newhead;
        while(oldtemp!=nullptr){
            newtemp->random=m[oldtemp->random];

            newtemp=newtemp->next;
            oldtemp=oldtemp->next;
        }
        return newhead;
    }
};