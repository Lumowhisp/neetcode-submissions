class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>&temp,vector<int>&cand,int index,int k){
    //base case
    if(index==cand.size() || temp.size()>=k){
        if(temp.size()==k){
            ans.push_back(temp);
        }
        return;
    }
    temp.push_back(cand[index]);
    solve(ans,temp,cand,index+1,k);
    temp.pop_back();
    solve(ans,temp,cand,index+1,k);
}
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>cand;
        for(int i=1;i<=n;i++){
            cand.push_back(i);
        }
        solve(ans,temp,cand,0,k);
        return ans;
    }
};