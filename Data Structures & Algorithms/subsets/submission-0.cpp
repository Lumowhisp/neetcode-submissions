class Solution {
public:
void helper(vector<vector<int>>& ans,vector<int>&nums,vector<int>&subset,int index){
  if(index==nums.size()){
    ans.push_back(subset);
    return;
  }
  subset.push_back(nums[index]);
  helper(ans,nums,subset,index+1);
  subset.pop_back();
  helper(ans,nums,subset,index+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>> ans;

        vector<int> subset;

        helper(ans, nums, subset, 0);

        return ans;
      
        
    }
};
