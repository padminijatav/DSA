class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    vector<int> count(2,0);
    for(int s:students) count[s]++;

    int remain=sandwiches.size();
    for(int s:sandwiches){
        if(count[s]==0) break;

        if(remain==0) break;

        count[s]--;
        remain--;
    }
    return remain;
    }
};