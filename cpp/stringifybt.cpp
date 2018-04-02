// Jiabei Luo
// 18ms c++ 3liner

class Solution {
public:
    string tree2str(TreeNode* t) {
        if (!t) return "";
        if (t->right) return to_string(t->val) + '(' + tree2str(t->left) + ')' + '(' + tree2str(t->right) + ')';
        return to_string(t->val) + ( (t->left) ? '(' + tree2str(t->left) + ')' : "" );
    }
};
