 #include <stdbool.h>
  #include <stdio.h>
  #include <stdlib.h>
  struct TreeNode {
      int val;
    struct TreeNode *left;
      struct TreeNode *right;
  };
bool hasPathSumInner(struct TreeNode* root, int targetSum,int prevSum){
    if(root == NULL)
    return false;
    int curSum = prevSum + root->val;
    if(root->left == NULL && root->right== NULL && curSum == targetSum)
    return true;
    return (hasPathSumInner(root->left,targetSum,curSum) || hasPathSumInner(root->right,targetSum,curSum))?true:false;
}
bool hasPathSum(struct TreeNode* root, int targetSum){
     return (hasPathSumInner(root,targetSum,0))?true:false;
}
