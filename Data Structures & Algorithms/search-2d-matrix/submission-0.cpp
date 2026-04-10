class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int idx;
        for(int i=0;i<matrix.size();i++){
            idx=lower_bound(matrix[i].begin(),matrix[i].end(),target)-matrix[i].begin();
            if(0<=idx && idx<matrix[i].size() && matrix[i][idx]==target){
                return true;
            }
        }
        return false;
    }
};
