// Jiabei Luo
// 6ms iterative c++ solution


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>> ans;
        if (!root) return ans; //return empty 2d vector
        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()) {
            // level vector
            vector<int> lvl;
            // # of all adjacent nodes of root at once
            int lvlct = bfs.size();
            for (int i = 0; i < lvlct; ++i) { 
                TreeNode *source = bfs.front();
                lvl.push_back(source->val);
                if (source->left) bfs.push(source->left);
                if (source->right) bfs.push(source->right);
                bfs.pop();
            }
            ans.push_back(lvl);
        }
        return ans;
    }
};