/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*Algorithm: 
1) Store the next node of given node temporary. 
2) Change the given node value to next node value(node->val=node->next->val).
3) Now change the next link of given node as next node link(node->next=node->next->next).
4) Delete the temporary node.

	The above algorithm cannot be used when the given node is the last node.
	Time Complexity: O(1)
	Problem Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/
*/
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *tmp=node->next;
        node->val=tmp->val;
        node->next=tmp->next;
        delete tmp;
    }
};