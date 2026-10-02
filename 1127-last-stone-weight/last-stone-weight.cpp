class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> p;
        for(int i:stones) p.push(i);

        while(p.size()>1){
            int a=p.top();
            p.pop();
            int b=p.top();
            p.pop();
            if(a!=b) p.push(a-b);

        }
        if(p.size()==1) return p.top();
        return 0;
    }
};