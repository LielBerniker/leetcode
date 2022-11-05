#include <iostream>
#include <vector>
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inOrder;
        inorderTraversalInner(root,inOrder);
        return inOrder;
    }
    void inorderTraversalInner(TreeNode* root , vector<int>& inOrder ) {
        if(root!=nullptr)
        {
            inorderTraversalInner(root->left,inOrder);
            inOrder.push_back(root->val);
            inorderTraversalInner(root->right,inOrder);
        }
    }
};