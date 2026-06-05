class Solution {
public:
void helper(string &digits,vector<string>&ans,unordered_map<char,string>&mp,int index,string &temp){
  if(index==digits.size()){
    ans.push_back(temp);
    return;
  }
  char digit=digits[index];
  string adj=mp[digit];
  for(int i=0;i<adj.size();i++){
    temp.push_back(adj[i]);
    helper(digits,ans,mp,index+1,temp);
    temp.pop_back();
  }
}
    vector<string> letterCombinations(string digits) {
      if(digits.empty()) return {};
        unordered_map<char,string>mp={
          {'2',"abc"},
          {'3',"def"},
          {'4',"ghi"},
          {'5',"jkl"},
          {'6',"mno"},
          {'7',"pqrs"},
          {'8',"tuv"},
          {'9',"wxyz"}
        };
        vector<string>ans;
        int index=0;
        string temp;
        helper(digits,ans,mp,index,temp);
        return ans;
        
        


    }
};