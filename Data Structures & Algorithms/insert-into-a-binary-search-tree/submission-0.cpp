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
void helper(TreeNode* root,int val,int left,int right){
  if(root==NULL){
    return;
  }
  if(val>root->val && val<right){
    if(root->right==NULL){
      TreeNode* newNode=new TreeNode(val);
      root->right=newNode;
      return;
    }
    helper(root->right,val,root->val,right);
  }
  else{
    if(root->left==NULL){
      TreeNode* newNode=new TreeNode(val);
      root->left=newNode;
      return;
    }
    helper(root->left,val,left,root->val);
  }
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
      if(root==NULL){
        return new TreeNode(val);
      }
      int left=INT_MIN;
      int right=INT_MAX;
      helper(root,val,left,right);
      return root;  
    }
};