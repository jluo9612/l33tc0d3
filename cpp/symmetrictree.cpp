/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Jiabei Luo
// 7ms c++ solution
class Solution {
public:
    
    bool isMirror(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) return true; // two empty trees
        if (!root1 || !root2) return false; // unmatching
        
        if (root1->val == root2->val) {
            return isMirror(root1->left, root2->right) &&
                   isMirror(root1->right, root2->left);
        }    
        return false;
    }
   
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return isMirror(root->left, root->right);
    }
};
