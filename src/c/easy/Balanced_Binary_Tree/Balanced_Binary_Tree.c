
 #include <stdbool.h>
  #include <stdio.h>
  #include <stdlib.h>
  struct TreeNode {
     int val;
      struct TreeNode *left;
      struct TreeNode *right;
  };
  typedef struct {
    bool isBal;
    int maxHight;
} answer;
int max1(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
answer* isBalancedInner(struct TreeNode* root){
     answer* ans =(answer*)calloc(sizeof(answer),1);
    if(root == NULL){
        ans->isBal = true;
        ans->maxHight=0;
    }
    else{
        answer* ansLeft = isBalancedInner(root->left);
        answer* ansRight = isBalancedInner(root->right);
        if(ansLeft->isBal==false || ansRight->isBal==false)
        ans->isBal = false;
        else
        {
        if(abs(ansLeft->maxHight - ansRight->maxHight) >1)
        ans->isBal = false;
        else
        ans->isBal = true;
        }
        ans->maxHight = 1+max1(ansLeft->maxHight,ansRight->maxHight);
        free(ansLeft);
        free(ansRight);
    }
    return ans;
}
bool isBalanced(struct TreeNode* root){
    answer* ans= isBalancedInner(root);
    bool answer = ans->isBal;
    free(ans);
   return (answer)?true:false;
    
}
