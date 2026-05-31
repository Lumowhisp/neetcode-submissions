class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&temp,vector<int>&candidates,int target,int index){
    //basecase
    if(index==candidates.size() || target<=0){
        if(target==0){
            ans.push_back(temp);
        }
        return;
    }
    //pick
    temp.push_back(candidates[index]);
    solve(ans,temp,candidates,target-candidates[index],index+1);
    temp.pop_back();
    //notpick
    //blocking the repetition
    while(index+1<candidates.size() && candidates[index]==candidates[index+1]){
        index++;
    }
    solve(ans,temp,candidates,target,index+1);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,candidates,target,0);
        return ans;

    }
};