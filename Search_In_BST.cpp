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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL || root->val==val) return root;
        else if(root->val < val) return searchBST(root->right,val);
        else return searchBST(root->left,val); 
    }
};

/* Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/541/week-3-june-15th-june-21st/3361/
   Time Complexity: 1) O(log N) in case of balanced BST
   					2) O(N) in case of Skewed Tree
*/