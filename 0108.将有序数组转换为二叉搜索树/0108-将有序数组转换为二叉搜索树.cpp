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

    TreeNode* traversal( vector<int>& vec,int left,int right){
        // 2.确定终止条件
        if( left > right ) return NULL;
        // 取中间节点
        int mid = (left + right ) / 2;
        // 定义新的节点
        TreeNode* node = new TreeNode(vec[mid]);
        node->left = traversal( vec,left, mid-1);    //构造左节点
        node->right = traversal( vec, mid+1,right );    //构造右子树
        return node;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return traversal( nums , 0, nums.size()-1);

    }
};