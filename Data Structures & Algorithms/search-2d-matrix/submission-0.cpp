class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
        int high=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
          if(matrix[i][low]<=target && matrix[i][high]>=target){
            while(low<=high){
              int mid=low+(high-low)/2;
              if(matrix[i][mid]==target){
                return true;
              }
              else if(matrix[i][mid]>target){
                high=mid-1;
              }
              else{
                low=mid+1;
              }
            }
          }
        }
        return false;
    }
};