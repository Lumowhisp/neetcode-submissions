/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void helper(TreeNode* root,int &countGood,int maxVal){
  if(root==NULL){
    return;
  }
  if(root->val < maxVal){
    helper(root->left,countGood,maxVal);
    helper(root->right,countGood,maxVal);
  }
  else{
    maxVal=root->val;
    countGood++;
    helper(root->left,countGood,maxVal);
    helper(root->right,countGood,maxVal);
  }
}
    int goodNodes(TreeNode* root) {
      if(root==NULL){
        return 0;
      }
      int countGood=0;
      int maxVal=INT_MIN;
      helper(root,countGood,maxVal);
      return countGood;
    }
};