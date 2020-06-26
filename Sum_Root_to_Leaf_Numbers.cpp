

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/542/week-4-june-22nd-june-28th/3372/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans;
    void find(TreeNode*root,int curr)
    {
        if(root==NULL) return;
        if(!root->left and !root->right)
        {
            ans += curr*10+root->val;
            return;
        }
        find(root->left,curr*10+root->val);
        find(root->right,curr*10+root->val);
    }
    int sumNumbers(TreeNode* root) {
        ans=0;
        find(root,0);
        return ans;
    }
};