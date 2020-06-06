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
/* Algorithm:
1) If root is NULL,then return.
2) If not swap(root->left,root->right).
3) Make recursive call for left and right subtrees.

	Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3347/
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return root;
        TreeNode *tmp=root->left; 
        root->left=root->right;
        root->right=tmp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};