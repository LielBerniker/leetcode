#include <stdio.h>
  struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
 };
struct TreeNode* sortedArrayToBSTInner(int* nums,int start,int end){
    struct TreeNode * currNpde = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    if(start == end)
    {currNpde->val = nums[start];
    currNpde->left =NULL;
    currNpde->right =NULL;
    return currNpde;}
    int middle = (end - start)/2 + start;
    currNpde->val = nums[middle];
    if(middle==end)
    currNpde->right = NULL;
    else
    currNpde->right = sortedArrayToBSTInner(nums,middle+1,end);
    if(middle == start)
    currNpde->left = NULL;
    else
    currNpde->left = sortedArrayToBSTInner(nums,start,middle-1);
    return currNpde;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    if(numsSize==0)
    return NULL;
    return sortedArrayToBSTInner(nums,0,numsSize-1);
}
