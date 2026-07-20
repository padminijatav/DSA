class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& matrix, int k) {
        queue<int> q;
        for (const auto& row : matrix) {
            for (const auto& element : row) {
                q.push(element);
            }
        }
        k=k%q.size();
        int i=0;
        while(i<q.size()-k){
            int d=q.front();
            q.pop();
            q.push(d);
            i++;
        }
        for (int i=0;i<matrix.size();i++) {
            for (int j=0;j<matrix[0].size();j++) {
                matrix[i][j]=q.front();
                q.pop();
            }
        }
        return matrix;
    }
};