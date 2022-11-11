
 
#include <stdio.h>
 
  typedef struct TreeNode {
     int val;
      struct TreeNode *left;
     struct TreeNode *right;
 }treeNode;
int max(int a , int b)
{
    return (a>b)?a:b;
}
int maxDepthInner(struct TreeNode* root){
    if(root == NULL )
    return 0;
    int leftSide = maxDepthInner(root->left);
    int rightSide = maxDepthInner(root->right);
    return (rightSide>leftSide)?(1+rightSide):(1+leftSide);
}
int maxDepth(struct TreeNode* root){
  int maxLen;
  maxLen = maxDepthInner(root);
  return maxLen;
}
int main(int argc, char *argv[]) {
    treeNode *root = (treeNode *)malloc(sizeof(treeNode));
    treeNode *right1 = (treeNode *)malloc(sizeof(treeNode));
    right1->left =NULL;
    right1->right = NULL;
    root->right = right1;
    root->left = NULL;
    maxDepth(root);

}
