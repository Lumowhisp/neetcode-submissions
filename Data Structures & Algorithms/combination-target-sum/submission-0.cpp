class Solution {
public:
void solve(vector<int>&candidates,vector<vector<int>>&ans,int target,int index,vector<int>&temp){
  //basecase
  if(index==candidates.size()||target<=0){
    if(target==0){
      ans.push_back(temp);
    }
    return;
  }
  //pick and not pick;
  temp.push_back(candidates[index]);
  solve(candidates,ans,target-candidates[index],index,temp);
  temp.pop_back();
  solve(candidates,ans,target,index+1,temp);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(candidates,ans,target,0,temp);
        return ans;
    }
};