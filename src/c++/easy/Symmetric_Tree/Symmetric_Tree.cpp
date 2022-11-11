
  struct TreeNode {
      int val;
    TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return checkSons(root->left,root->right);
    }
    bool checkSons(TreeNode* node1,TreeNode* node2)
    {
        if(node1==nullptr && node2 == nullptr)
        return true;
        if((node1 == nullptr || node2 == nullptr) || (node1->val != node2->val))
        return false;
        return (checkSons(node1->left,node2->right) && checkSons(node1->right,node2->left));
    }
};