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
        if (head == nullptr) return nullptr;
        
        unordered_map<Node*, Node*> m;
        
        // Pass 1: Clone all nodes and store them in the map
        Node* curr = head;
        while (curr != nullptr) {
            m[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        // Pass 2: Connect the next and random pointers for the clones
        curr = head;
        while (curr != nullptr) {
            m[curr]->next = m[curr->next];
            m[curr]->random = m[curr->random];
            curr = curr->next;
        }
        
        return m[head];
    }
};