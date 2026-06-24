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
void helper(TreeNode* p,TreeNode* q,bool &isValid){
  if(p==NULL && q==NULL){
    return;
  }
  if((p!=NULL && q==NULL)||(p==NULL && q!=NULL)){
    isValid=false;
    return;
  }
  if(p->val!=q->val){
    isValid=false;
    return;
  }
  helper(p->left,q->left,isValid);
  helper(p->right,q->right,isValid);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
      bool isValid=true;
      helper(p,q,isValid);
      return isValid;  
    }
};