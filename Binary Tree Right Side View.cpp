/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        // add comments to explain problem
        vector<int> sol;
        solve(root, sol, 1);
        return sol;
    }
    void solve(TreeNode* root, vector<int>& sol, int l) {
        
        if (!root)
            return;
        
        if (sol.size() < l)
            sol.push_back(root->val);
        else
            sol[l] = root->val;

        cout << "______________________________________" << endl;
        cout << "level: " << l << endl;
        for (auto k : sol)
            cout << k << " ";
        cout << endl;
        cout << "______________________________________" << endl;
        
        solve(root->left, sol, l + 1);
        solve(root->right, sol, l + 1);
    }
};